#include <iostream> //Standard include for iostream
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/videoio/videoio.hpp>

using namespace cv; //Opencv namespace
using namespace std; //Standard namespace

//TODO: Clean code up please
//Main method; num args, arg list
int main(int argc, char** argv)
{
	//Decalare vars here and get gui data and stuff
	
	VideoCapture video(0); // Get Video from camera 0
	
	if (!video.isOpened())
	{	
		//TODO: There has got to be a better way to handle this error than just giving up ...
		cout << "Problem opening camera! Program Exiting ..." << endl;
		return -1;
	}

	
	while (1)
	{
		Mat frame;
		bool isSucessfulRead = video.read(frame);
		cv::GaussianBlur(frame, frame, Size(31, 31), 0, 0); //Source, Destination, Kernel size, std dev x, std dev y
                cv::medianBlur(frame, frame, 31); // Source, Destination, Kernel size
		imshow("output", frame);
		
		if(waitKey(30) == 27)
		{
			break;
		}
	}

	return 0;
}