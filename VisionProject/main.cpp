//Author: Sidharth Annapragada @organization 'Dawgma' FIRST Robotics Competition Team 1712 @Lower Merion High School
//Date Start: 12/28/18

//inlcudes for a bunch of opencv libraries and others
#include <iostream> //Console output
#include <ui_dawgmavision.h> //Header file for our User Interface
#include <QApplication> //Header for gui main class
#include <opencv2/core/core.hpp> //Core opencv library for stuff like the Mat datatype
#include <opencv2/imgproc/imgproc.hpp> //Library for image processing like filters and thresholding
#include <opencv2/highgui/highgui.hpp> //Library for displaying videos, images, and other stuff
#include <opencv2/videoio/videoio.hpp> //Library for getting video input and parsing it
#include <opencv2/video/video.hpp> //Library for ___?? Video stuff I guess, thats why I included it ...
//TODO: Will need more includes for dependencies!!

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow *window = new QMainWindow;
    Ui::DawgmaVision ui;
    ui.setupUi(window);

    window->show();

    VideoCapture video(1); //TODO: Make setting for this

    //"Handles" (if you can call it that) case where we fail to get video
    if (!video.isOpened())
    {
        //TODO: better error handling please ... (Become the warlock you were always meant to be trooper 772)
        cout << "Problem opening camera! Program exiting because it is just easier to give up ..." << endl;
        return -1;
    }

    //This is our camera processing loop. (They are always watching!!)
    while (1)
    {
        Mat frame; //This is our camera image for this frame
        bool successfullyRead = video.read(frame); //Puts the frame into "frame" and returns success bool

        if (!successfullyRead)
        {
            cout << "Failed to Read Frame!!" << endl;
        }

        /*
         * UI DISPLAY OF RAW IMAGE
         */
        if (ui.display_raw->isChecked())
        {
            ui.image_out->show();
           //cv::imshow("raw", frame);
            Mat rgb;
            cv::cvtColor(frame, rgb, CV_BGR2RGB);
            QImage qimg(rgb.data, rgb.cols, rgb.rows, rgb.step, QImage::Format_RGB888); // Convert frame to QImage
            ui.image_out->setPixmap(QPixmap::fromImage(qimg)); //Display the QImage as a QPixmap in the label 'image_out'
        }
        else
        {
            ui.image_out->hide();
            //cv::destroyAllWindows(); //Closes the window if not checked
        }

        /*
         * THRESHOLDING FUNCTIONS
         */
        if (ui.threshold_box->isChecked()) //Execute if the user has checked the threshold option
        {
            //Get user input
            int h_u = ui.h_upper->value();
            int h_l = ui.h_lower->value();
            int s_u = ui.s_upper->value();
            int s_l = ui.s_lower->value();
            int v_u = ui.v_upper->value();
            int v_l = ui.v_lower->value();

            cv::cvtColor(frame, frame, CV_BGR2HSV);

            /*
            if (ui.display_raw->isChecked())  //Convert RGB or BGR (depending on if it was flipped) to HSV color space, which is less sensitive to illumination changes
            {
                cv::cvtColor(frame, frame, CV_RGB2HSV);
            }
            else
            {
                cv::cvtColor(frame, f(rame, CV_BGR2HSV);
            }
            */

            cv::inRange(frame, Scalar(h_l,s_l,v_l), Scalar(h_u, s_u, v_u), frame); //Threshold within the range of HSV values to 255 or 0 (White or black);
        }


        /*
         * TODO: EXPOSURE CONTROLS
         */

        /*
         * BLURRING FUNCTIONS
         * THESE ARE CPU INTENSIVE SO USE WITH CAUTION
         */
        if (ui.blur_box->isChecked())
        {
            int gK = ui.gaussian_kernelsize->value();
            int mK = ui.median_kernelsize->value();

            if (gK % 2 == 0 && gK != 0) // gK MUST be an odd number
            {
                gK = gK + 1;
            }
            if (mK % 2 == 0 && mK != 0) // mK MUST be an odd number
            {
                mK = mK + 1;
            }

            //NOTE: Median blur is typically only used with the Hough Transform (Shape filter),so this is a reminder comment to pass that tidbit along
            if (gK != 0 && mK != 0)
            {
                cv::GaussianBlur(frame, frame, Size(gK, gK), 0, 0); //Source, Destination, Kernel size, std dev x, std dev y
                cv::medianBlur(frame, frame, mK); // Source, Destination, Kernel size
            }
            else if (gK != 0 && mK == 0)
            {
                cv::GaussianBlur(frame, frame, Size(gK, gK), 0, 0); //Source, Destination, Kernel size, std dev x, std dev y
            }
            else if (gK == 0 && mK != 0)
            {
                cv::medianBlur(frame, frame, mK);  // Source, Destination, Kernel size
            }
        }



        /*
         * EROSION AND DILATION
         */
        //Erosion typically patches 'holes' in the mask; Dilation typically blobs disparate elements together. Erode+Dilate is called 'opening'->removes noise; Dilate+Erode is 'closing'->removes holes
        //There are three kernel shapes: Rectangular, Cross Shaped, and Circular --> This IMPACTS the functioning of this filter!!!
        //TODO: No rects within other rects --> Duh.
        if (ui.morpho_box->isChecked() && ui.threshold_box->isChecked()) //Perform operation if user has checked ErosionDilation box and has thresholded the image
        {
            //Get user input
            int kernel_type = ui.ed_kernel_shape->currentIndex(); //0 is MORPH_RECT, 1 is MORPH_CROSS, 2 is MORPH_ELLIPSE
            int operation = ui.morpho_type->currentIndex(); //0 is opening, 1 is closing, 2 is both
            int erosion_kernel_size = ui.erosion_kernelsize->value();
            int dilation_kernel_size = ui.dilation_kernelsize->value();

            //Construct Kernels

            Mat erosion_element = cv::getStructuringElement(kernel_type, Size(2*erosion_kernel_size+1, 2*erosion_kernel_size+1), Point(erosion_kernel_size, erosion_kernel_size));

            Mat dilation_element = cv::getStructuringElement(kernel_type, Size(2*dilation_kernel_size+1, 2*dilation_kernel_size+1), Point(dilation_kernel_size,dilation_kernel_size));


            if (operation == 0)
            {
                //Opening
                cv::erode(frame, frame, erosion_element);
                cv::dilate(frame, frame, dilation_element);
            }
            else if (operation == 1)
            {
                //Closing
                cv::dilate(frame, frame, dilation_element);
                cv::erode(frame, frame, erosion_element);
            }
            else if (operation == 2)
            {
                //Opening
                cv::erode(frame, frame, erosion_element);
                cv::dilate(frame, frame, dilation_element);

                //Closing
                cv::dilate(frame, frame, dilation_element);
                cv::erode(frame, frame, erosion_element);
            }
        }
        else if (ui.morpho_box->isChecked() && !ui.threshold_box->isChecked())
        {
            cout << "Please threshold image before performing morphological operations." << endl;
        }

        if(ui.threshold_box->isChecked())
        {

        }

        /*
         * CONTOURING AND Contour filters (Shape, Area, Fullness, Aspect Ratio)
         * TODO: SHAPE FILTER
         */
        //(ui.shape_box->isChecked() || ui.area_box->isChecked() || ui.aspect_box->isChecked() || ui.fullness_box->isChecked())
        if (ui.threshold_box->isChecked())
        {
            vector< vector<Point> > contours;
            vector<Vec4i> hierarchy;

            cv::findContours(frame, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0,0)); //This guy finds "contours" in the image, basically outlines of stuff

            cv::cvtColor(frame, frame, CV_GRAY2BGR);

            //Shape Filter
            if (ui.shape_box->isChecked() && ui.num_vert->value() == 0) //Circles
            {
                //Handle Circles
            }
            else if (ui.shape_box->isChecked())
            {
                //Handle other shapes
            }


            //Every Filter Case:
            //TODO: Only rectangles handled here, so we need to add other shapes please. Might do after game reveal, or like never . . .
            //TODO: COMPETITION MODE should NOT!!!!!!!!! USE  DOUBLES, they are useless!!
            for (int i = 0; i < contours.size(); i++)
            {
                Rect b = boundingRect(contours[i]);
                if (b.width > 20 && b.height > 20) //This will get rid of baby contours that are problematic even though they can be very cute
                {
                    Moments M = cv::moments(contours[i], true);
                    Point center = Point((M.m10/M.m00),(M.m01/M.m00));
                    if (ui.area_box->isChecked() && !(ui.fullness_box->isChecked()) && !(ui.aspect_box->isChecked())) //Area
                    {
                        double max_area = (double)ui.area_upper->value();
                        double min_area = (double)ui.area_lower->value();
                        double box_area = (((double)(b.width*b.height))/(640.0*480.0))*100.0;
                        ui.area_lcd->display(box_area);
                        if (box_area <= max_area && box_area >= min_area) //Handle area (remember this is percentage based)
                        {
                            cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                            cv::circle(frame, center, 5, Scalar(0,255,0), 3, LINE_8, 0);
                            ui.x_lcd->display(center.x);
                            ui.y_lcd->display(center.y);
                        }
                    }
                    else if (ui.area_box->isChecked() && (ui.fullness_box->isChecked()) && !(ui.aspect_box->isChecked())) //Area and Fullness
                    {
                        double max_area = (double)ui.area_upper->value();
                        double min_area = (double)ui.area_lower->value();
                        double box_area = (((double)(b.width*b.height))/(640.0*480.0))*100.0;
                        ui.area_lcd->display(box_area);
                        if (box_area <= max_area && box_area >= min_area) //Handle area (remember this is percentage based)
                        {
                            Mat roi = frame(Range(b.x, b.x + b.width ), Range(b.y, b.y + b.height));
                            double avg = (double)((cv::mean(roi)[0])/255.0)*100.0;
                            double fullness_max = (double)ui.fullness_upper->value();
                            double fullness_min = (double)ui.fullness_lower->value();
                            ui.fullness_lcd->display(avg);
                            if (avg <= fullness_max && avg >= fullness_min)
                            {
                                cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                                cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                                ui.x_lcd->display(center.x);
                                ui.y_lcd->display(center.y);
                            }
                        }
                    }
                    else if (ui.area_box->isChecked() && (ui.fullness_box->isChecked()) && (ui.aspect_box->isChecked())) //Area Fullness and Arat
                    {
                        double max_area = (double)ui.area_upper->value();
                        double min_area = (double)ui.area_lower->value();
                        double box_area = (((double)(b.width*b.height))/(640.0*480.0))*100.0;
                        ui.area_lcd->display(box_area);
                        if (box_area <= max_area && box_area >= min_area) //Handle area (remember this is percentage based)
                        {
                            Mat roi = frame(Range(b.x, b.x + b.width ), Range(b.y, b.y + b.height));
                            double avg = (double)(((cv::mean(roi)[0])/255.0)*100.0);
                            double fullness_max = (double)ui.fullness_upper->value();
                            double fullness_min = (double)ui.fullness_lower->value();
                            ui.fullness_lcd->display(avg);
                            if (avg <= fullness_max && avg >= fullness_min)
                            {
                                double arat_max = (double)(ui.arat_upper->value())/10.0;
                                double arat_min = (double)(ui.arat_lower->value())/10.0;
                                double arat = ((double)b.width)/((double)b.height);
                                ui.arat_lcd->display(arat);
                                if (arat <= arat_max && arat >= arat_min)
                                {
                                    cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                                    cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                                    ui.x_lcd->display(center.x);
                                    ui.y_lcd->display(center.y);
                                }
                            }
                        }
                    }
                    else if (ui.area_box->isChecked() && !(ui.fullness_box->isChecked()) && (ui.aspect_box->isChecked())) //Area and Arat
                    {
                        double max_area = (double)ui.area_upper->value();
                        double min_area = (double)ui.area_lower->value();
                        double box_area = (((double)(b.width*b.height))/(640.0*480.0))*100.0;
                        ui.area_lcd->display(box_area);
                        if (box_area <= max_area && box_area >= min_area) //Handle area (remember this is percentage based)
                        {
                            double arat_max = (double)(ui.arat_upper->value())/10.0;
                            double arat_min = (double)(ui.arat_lower->value())/10.0;
                            double arat = ((double)b.width)/((double)b.height);
                            ui.arat_lcd->display(arat);
                            if (arat <= arat_max && arat >= arat_min)
                            {
                                cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                                cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                                ui.x_lcd->display(center.x);
                                ui.y_lcd->display(center.y);
                            }
                        }
                    }
                    else if (!(ui.area_box->isChecked()) && (ui.fullness_box->isChecked()) && !(ui.aspect_box->isChecked())) //Fullness
                    {
                        Mat roi = frame(Range(b.x, b.x + b.width ), Range(b.y, b.y + b.height));
                        double avg = (double)((cv::mean(roi)[0])/255.0)*100.0;
                        double fullness_max = (double)ui.fullness_upper->value();
                        double fullness_min = (double)ui.fullness_lower->value();
                        ui.fullness_lcd->display(avg);
                        if (avg <= fullness_max && avg >= fullness_min)
                        {
                            cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                            cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                            ui.x_lcd->display(center.x);
                            ui.y_lcd->display(center.y);
                        }
                    }
                    else if (!(ui.area_box->isChecked()) && (ui.fullness_box->isChecked()) && (ui.aspect_box->isChecked())) //Fullness and Arat
                    {
                        Mat roi = frame(Range(b.x, b.x + b.width ), Range(b.y, b.y + b.height));
                        double avg = (double)((cv::mean(roi)[0])/255.0)*100.0;
                        double fullness_max = (double)ui.fullness_upper->value();
                        double fullness_min = (double)ui.fullness_lower->value();
                        ui.fullness_lcd->display(avg);
                        if (avg <= fullness_max && avg >= fullness_min)
                        {
                            double arat_max = (double)(ui.arat_upper->value())/10.0;
                            double arat_min = (double)(ui.arat_lower->value())/10.0;
                            double arat = ((double)b.width)/((double)b.height);
                            ui.arat_lcd->display(arat);
                            if (arat <= arat_max && arat >= arat_min)
                            {
                                cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                                cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                                ui.x_lcd->display(center.x);
                                ui.y_lcd->display(center.y);
                            }
                        }
                    }
                    else if (!(ui.area_box->isChecked()) && !(ui.fullness_box->isChecked()) && (ui.aspect_box->isChecked()))   //Arat
                    {
                        double arat_max = (double)(ui.arat_upper->value())/10.0;
                        double arat_min = (double)(ui.arat_lower->value())/10.0;
                        double arat = ((double)b.width)/((double)b.height);
                        ui.arat_lcd->display(arat);
                        if (arat <= arat_max && arat >= arat_min)
                        {
                            cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                            cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                            ui.x_lcd->display(center.x);
                            ui.y_lcd->display(center.y);
                        }
                    }
                    else //no filters active so draw all boxes!
                    {
                        cv::rectangle(frame, b.tl(), b.br(), Scalar(0,255,0), 3, LINE_8, 0);
                        cv::circle(frame, center, 5, Scalar(0,255,0), 1, LINE_8, 0);
                        ui.x_lcd->display(center.x);
                        ui.y_lcd->display(center.y);
                    }
                }
                }

        }



        /*
         * UI DISPLAY OF FINAL IMAGE and RAW IMAGE
         */
        if (ui.display_processed->isChecked()) // Option to turn it off for framerate saving --> will automate with "Competition Mode" option later (TODO)
        {
            ui.image_out->show();
           //THIS might be costing framerate. Not sure.
           //Remember we have to do some proper displays stuff here later!! TODO
            /*
           if (ui.threshold_box->isChecked())
           {
              QImage qimg(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_MonoLSB); // Convert frame to QImage
              ui.image_out->setPixmap(QPixmap::fromImage(qimg)); //Display the QImage as a QPixmap in the label 'image_out'
           }
           else
           {
               QImage qimg(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888); // Convert frame to QImage
               ui.image_out->setPixmap(QPixmap::fromImage(qimg)); //Display the QImage as a QPixmap in the label 'image_out'
           }
            */


            imshow("output", frame);


           //cv::imshow("processed",frame); //This might be easier for the cpu
        }
        else
        {
            ui.image_out->hide(); //Hides the output if not checked
        }



        if(waitKey(30)==27)
        {
            break;
        }


    }

    //The End
    return app.exec();
}

