/********************************************************************************
** Form generated from reading UI file 'dawgmavision.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAWGMAVISION_H
#define UI_DAWGMAVISION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSlider>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DawgmaVision
{
public:
    QWidget *centralwidget;
    QWidget *gui_container;
    QTabWidget *tabs;
    QWidget *targeting_tab;
    QScrollArea *numeric_output;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QLabel *label_18;
    QLabel *label_17;
    QLCDNumber *fullness_lcd;
    QLabel *label_20;
    QLabel *label_19;
    QLCDNumber *area_lcd;
    QLCDNumber *vert_lcd;
    QLabel *label_16;
    QLCDNumber *arat_lcd;
    QLCDNumber *y_lcd;
    QLCDNumber *x_lcd;
    QScrollArea *settings;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_9;
    QGroupBox *shape_box;
    QGridLayout *gridLayout_4;
    QSlider *num_vert;
    QLabel *label_12;
    QSpinBox *num_vert_dsp;
    QGroupBox *aspect_box;
    QGridLayout *gridLayout_7;
    QLabel *label_15;
    QLabel *label_24;
    QSlider *arat_upper;
    QSlider *arat_lower;
    QSpinBox *arat_l_dsp;
    QSpinBox *arat_u_dsp;
    QGroupBox *threshold_box;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_11;
    QSlider *h_lower;
    QSlider *v_lower;
    QSlider *v_upper;
    QSpinBox *v_u_dsp;
    QSlider *h_upper;
    QSlider *s_lower;
    QSlider *s_upper;
    QSpinBox *v_l_dsp;
    QSpinBox *s_l_dsp;
    QSpinBox *s_u_dsp;
    QSpinBox *h_l_dsp;
    QSpinBox *h_u_dsp;
    QGroupBox *area_box;
    QGridLayout *gridLayout_5;
    QSlider *area_upper;
    QLabel *label_13;
    QSlider *area_lower;
    QSpinBox *area_l_dsp;
    QSpinBox *area_u_dsp;
    QGroupBox *morpho_box;
    QGridLayout *gridLayout_3;
    QComboBox *ed_kernel_shape;
    QSlider *dilation_kernelsize;
    QSpinBox *d_k_size_disp;
    QLabel *label;
    QSpinBox *e_k_size_disp;
    QLabel *label_8;
    QLabel *label_7;
    QSlider *erosion_kernelsize;
    QComboBox *morpho_type;
    QLabel *label_3;
    QGroupBox *exposure_box;
    QGridLayout *gridLayout_10;
    QSlider *exposure_val;
    QSpinBox *exposure_dsp;
    QGroupBox *fullness_box;
    QGridLayout *gridLayout_6;
    QLabel *label_14;
    QSlider *fullness_upper;
    QSlider *fullness_lower;
    QSpinBox *fullness_l_dsp;
    QSpinBox *fullness_u_dsp;
    QGroupBox *blur_box;
    QGridLayout *gridLayout;
    QSlider *gaussian_kernelsize;
    QSpinBox *g_k_size_disp;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *m_k_size_disp;
    QSlider *median_kernelsize;
    QLabel *image_out;
    QCheckBox *display_raw;
    QCheckBox *display_processed;
    QWidget *networking_tab;
    QWidget *camera_settings;
    QTreeWidget *camera_settings_2;
    QGraphicsView *graphicsView;
    QLabel *label_4;
    QLabel *label_2;
    QWidget *menu;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_21;

    void setupUi(QMainWindow *DawgmaVision)
    {
        if (DawgmaVision->objectName().isEmpty())
            DawgmaVision->setObjectName(QString::fromUtf8("DawgmaVision"));
        DawgmaVision->resize(1038, 645);
        centralwidget = new QWidget(DawgmaVision);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gui_container = new QWidget(centralwidget);
        gui_container->setObjectName(QString::fromUtf8("gui_container"));
        gui_container->setGeometry(QRect(0, 0, 1041, 631));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gui_container->sizePolicy().hasHeightForWidth());
        gui_container->setSizePolicy(sizePolicy);
        tabs = new QTabWidget(gui_container);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setGeometry(QRect(0, 0, 1041, 651));
        tabs->setTabPosition(QTabWidget::West);
        tabs->setElideMode(Qt::ElideNone);
        tabs->setDocumentMode(false);
        tabs->setTabsClosable(false);
        tabs->setMovable(false);
        targeting_tab = new QWidget();
        targeting_tab->setObjectName(QString::fromUtf8("targeting_tab"));
        numeric_output = new QScrollArea(targeting_tab);
        numeric_output->setObjectName(QString::fromUtf8("numeric_output"));
        numeric_output->setGeometry(QRect(350, 548, 651, 71));
        numeric_output->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 634, 157));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_8->addWidget(label_18, 2, 0, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_8->addWidget(label_17, 1, 0, 1, 1);

        fullness_lcd = new QLCDNumber(scrollAreaWidgetContents);
        fullness_lcd->setObjectName(QString::fromUtf8("fullness_lcd"));

        gridLayout_8->addWidget(fullness_lcd, 3, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 4, 0, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_8->addWidget(label_19, 3, 0, 1, 1);

        area_lcd = new QLCDNumber(scrollAreaWidgetContents);
        area_lcd->setObjectName(QString::fromUtf8("area_lcd"));

        gridLayout_8->addWidget(area_lcd, 2, 1, 1, 1);

        vert_lcd = new QLCDNumber(scrollAreaWidgetContents);
        vert_lcd->setObjectName(QString::fromUtf8("vert_lcd"));

        gridLayout_8->addWidget(vert_lcd, 1, 1, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_8->addWidget(label_16, 0, 0, 1, 1);

        arat_lcd = new QLCDNumber(scrollAreaWidgetContents);
        arat_lcd->setObjectName(QString::fromUtf8("arat_lcd"));

        gridLayout_8->addWidget(arat_lcd, 4, 1, 1, 1);

        y_lcd = new QLCDNumber(scrollAreaWidgetContents);
        y_lcd->setObjectName(QString::fromUtf8("y_lcd"));

        gridLayout_8->addWidget(y_lcd, 0, 2, 1, 1);

        x_lcd = new QLCDNumber(scrollAreaWidgetContents);
        x_lcd->setObjectName(QString::fromUtf8("x_lcd"));

        gridLayout_8->addWidget(x_lcd, 0, 1, 1, 1);

        numeric_output->setWidget(scrollAreaWidgetContents);
        settings = new QScrollArea(targeting_tab);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(0, 0, 331, 621));
        settings->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -525, 314, 1144));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        shape_box = new QGroupBox(scrollAreaWidgetContents_2);
        shape_box->setObjectName(QString::fromUtf8("shape_box"));
        shape_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        shape_box->setFlat(false);
        shape_box->setCheckable(true);
        shape_box->setChecked(false);
        gridLayout_4 = new QGridLayout(shape_box);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        num_vert = new QSlider(shape_box);
        num_vert->setObjectName(QString::fromUtf8("num_vert"));
        num_vert->setMaximum(10);
        num_vert->setValue(4);
        num_vert->setOrientation(Qt::Horizontal);
        num_vert->setTickPosition(QSlider::TicksAbove);

        gridLayout_4->addWidget(num_vert, 1, 0, 1, 1);

        label_12 = new QLabel(shape_box);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        num_vert_dsp = new QSpinBox(shape_box);
        num_vert_dsp->setObjectName(QString::fromUtf8("num_vert_dsp"));
        num_vert_dsp->setMaximum(15);
        num_vert_dsp->setValue(4);

        gridLayout_4->addWidget(num_vert_dsp, 1, 1, 1, 1);


        gridLayout_9->addWidget(shape_box, 5, 0, 1, 1);

        aspect_box = new QGroupBox(scrollAreaWidgetContents_2);
        aspect_box->setObjectName(QString::fromUtf8("aspect_box"));
        aspect_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        aspect_box->setFlat(false);
        aspect_box->setCheckable(true);
        aspect_box->setChecked(false);
        gridLayout_7 = new QGridLayout(aspect_box);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_15 = new QLabel(aspect_box);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 1, 0, 1, 1);

        label_24 = new QLabel(aspect_box);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 4, 1, 1, 1);

        arat_upper = new QSlider(aspect_box);
        arat_upper->setObjectName(QString::fromUtf8("arat_upper"));
        arat_upper->setMaximum(200);
        arat_upper->setValue(200);
        arat_upper->setOrientation(Qt::Horizontal);
        arat_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_7->addWidget(arat_upper, 2, 0, 1, 2);

        arat_lower = new QSlider(aspect_box);
        arat_lower->setObjectName(QString::fromUtf8("arat_lower"));
        arat_lower->setMaximum(200);
        arat_lower->setOrientation(Qt::Horizontal);
        arat_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_7->addWidget(arat_lower, 3, 0, 1, 2);

        arat_l_dsp = new QSpinBox(aspect_box);
        arat_l_dsp->setObjectName(QString::fromUtf8("arat_l_dsp"));
        arat_l_dsp->setMaximum(200);
        arat_l_dsp->setValue(0);

        gridLayout_7->addWidget(arat_l_dsp, 3, 2, 1, 1);

        arat_u_dsp = new QSpinBox(aspect_box);
        arat_u_dsp->setObjectName(QString::fromUtf8("arat_u_dsp"));
        arat_u_dsp->setMaximum(200);
        arat_u_dsp->setValue(200);

        gridLayout_7->addWidget(arat_u_dsp, 2, 2, 1, 1);


        gridLayout_9->addWidget(aspect_box, 8, 0, 1, 1);

        threshold_box = new QGroupBox(scrollAreaWidgetContents_2);
        threshold_box->setObjectName(QString::fromUtf8("threshold_box"));
        threshold_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        threshold_box->setFlat(false);
        threshold_box->setCheckable(true);
        threshold_box->setChecked(false);
        gridLayout_2 = new QGridLayout(threshold_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_10 = new QLabel(threshold_box);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        label_9 = new QLabel(threshold_box);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        label_11 = new QLabel(threshold_box);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 8, 0, 1, 1);

        h_lower = new QSlider(threshold_box);
        h_lower->setObjectName(QString::fromUtf8("h_lower"));
        h_lower->setMaximum(180);
        h_lower->setOrientation(Qt::Horizontal);
        h_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(h_lower, 2, 0, 1, 1);

        v_lower = new QSlider(threshold_box);
        v_lower->setObjectName(QString::fromUtf8("v_lower"));
        v_lower->setMaximum(255);
        v_lower->setOrientation(Qt::Horizontal);
        v_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(v_lower, 11, 0, 1, 1);

        v_upper = new QSlider(threshold_box);
        v_upper->setObjectName(QString::fromUtf8("v_upper"));
        v_upper->setMaximum(255);
        v_upper->setValue(255);
        v_upper->setOrientation(Qt::Horizontal);
        v_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(v_upper, 9, 0, 1, 1);

        v_u_dsp = new QSpinBox(threshold_box);
        v_u_dsp->setObjectName(QString::fromUtf8("v_u_dsp"));
        v_u_dsp->setMaximum(255);
        v_u_dsp->setValue(255);

        gridLayout_2->addWidget(v_u_dsp, 9, 1, 1, 1);

        h_upper = new QSlider(threshold_box);
        h_upper->setObjectName(QString::fromUtf8("h_upper"));
        h_upper->setMaximum(180);
        h_upper->setValue(180);
        h_upper->setOrientation(Qt::Horizontal);
        h_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(h_upper, 1, 0, 1, 1);

        s_lower = new QSlider(threshold_box);
        s_lower->setObjectName(QString::fromUtf8("s_lower"));
        s_lower->setMaximum(255);
        s_lower->setOrientation(Qt::Horizontal);
        s_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(s_lower, 6, 0, 1, 1);

        s_upper = new QSlider(threshold_box);
        s_upper->setObjectName(QString::fromUtf8("s_upper"));
        s_upper->setMaximum(255);
        s_upper->setValue(255);
        s_upper->setOrientation(Qt::Horizontal);
        s_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_2->addWidget(s_upper, 5, 0, 1, 1);

        v_l_dsp = new QSpinBox(threshold_box);
        v_l_dsp->setObjectName(QString::fromUtf8("v_l_dsp"));
        v_l_dsp->setMaximum(255);

        gridLayout_2->addWidget(v_l_dsp, 11, 1, 1, 1);

        s_l_dsp = new QSpinBox(threshold_box);
        s_l_dsp->setObjectName(QString::fromUtf8("s_l_dsp"));
        s_l_dsp->setMaximum(255);

        gridLayout_2->addWidget(s_l_dsp, 6, 1, 1, 1);

        s_u_dsp = new QSpinBox(threshold_box);
        s_u_dsp->setObjectName(QString::fromUtf8("s_u_dsp"));
        s_u_dsp->setMaximum(255);
        s_u_dsp->setValue(255);

        gridLayout_2->addWidget(s_u_dsp, 5, 1, 1, 1);

        h_l_dsp = new QSpinBox(threshold_box);
        h_l_dsp->setObjectName(QString::fromUtf8("h_l_dsp"));
        h_l_dsp->setMaximum(180);

        gridLayout_2->addWidget(h_l_dsp, 2, 1, 1, 1);

        h_u_dsp = new QSpinBox(threshold_box);
        h_u_dsp->setObjectName(QString::fromUtf8("h_u_dsp"));
        h_u_dsp->setMaximum(180);
        h_u_dsp->setValue(180);

        gridLayout_2->addWidget(h_u_dsp, 1, 1, 1, 1);


        gridLayout_9->addWidget(threshold_box, 1, 0, 1, 1);

        area_box = new QGroupBox(scrollAreaWidgetContents_2);
        area_box->setObjectName(QString::fromUtf8("area_box"));
        area_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        area_box->setFlat(false);
        area_box->setCheckable(true);
        area_box->setChecked(false);
        gridLayout_5 = new QGridLayout(area_box);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        area_upper = new QSlider(area_box);
        area_upper->setObjectName(QString::fromUtf8("area_upper"));
        area_upper->setMaximum(100);
        area_upper->setValue(100);
        area_upper->setOrientation(Qt::Horizontal);
        area_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_5->addWidget(area_upper, 1, 0, 1, 1);

        label_13 = new QLabel(area_box);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);

        area_lower = new QSlider(area_box);
        area_lower->setObjectName(QString::fromUtf8("area_lower"));
        area_lower->setMaximum(100);
        area_lower->setValue(3);
        area_lower->setOrientation(Qt::Horizontal);
        area_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_5->addWidget(area_lower, 2, 0, 1, 1);

        area_l_dsp = new QSpinBox(area_box);
        area_l_dsp->setObjectName(QString::fromUtf8("area_l_dsp"));
        area_l_dsp->setMaximum(100);
        area_l_dsp->setValue(3);

        gridLayout_5->addWidget(area_l_dsp, 2, 1, 1, 1);

        area_u_dsp = new QSpinBox(area_box);
        area_u_dsp->setObjectName(QString::fromUtf8("area_u_dsp"));
        area_u_dsp->setMaximum(100);
        area_u_dsp->setValue(100);

        gridLayout_5->addWidget(area_u_dsp, 1, 1, 1, 1);


        gridLayout_9->addWidget(area_box, 6, 0, 1, 1);

        morpho_box = new QGroupBox(scrollAreaWidgetContents_2);
        morpho_box->setObjectName(QString::fromUtf8("morpho_box"));
        morpho_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        morpho_box->setFlat(false);
        morpho_box->setCheckable(true);
        morpho_box->setChecked(false);
        gridLayout_3 = new QGridLayout(morpho_box);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ed_kernel_shape = new QComboBox(morpho_box);
        ed_kernel_shape->setObjectName(QString::fromUtf8("ed_kernel_shape"));

        gridLayout_3->addWidget(ed_kernel_shape, 0, 2, 1, 1);

        dilation_kernelsize = new QSlider(morpho_box);
        dilation_kernelsize->setObjectName(QString::fromUtf8("dilation_kernelsize"));
        dilation_kernelsize->setMaximum(30);
        dilation_kernelsize->setValue(5);
        dilation_kernelsize->setOrientation(Qt::Horizontal);
        dilation_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout_3->addWidget(dilation_kernelsize, 3, 2, 1, 1);

        d_k_size_disp = new QSpinBox(morpho_box);
        d_k_size_disp->setObjectName(QString::fromUtf8("d_k_size_disp"));
        d_k_size_disp->setMaximum(30);
        d_k_size_disp->setValue(5);

        gridLayout_3->addWidget(d_k_size_disp, 3, 3, 1, 1);

        label = new QLabel(morpho_box);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 0, 1, 1, 1);

        e_k_size_disp = new QSpinBox(morpho_box);
        e_k_size_disp->setObjectName(QString::fromUtf8("e_k_size_disp"));
        e_k_size_disp->setMaximum(30);
        e_k_size_disp->setValue(5);

        gridLayout_3->addWidget(e_k_size_disp, 2, 3, 1, 1);

        label_8 = new QLabel(morpho_box);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 3, 1, 1, 1);

        label_7 = new QLabel(morpho_box);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 1, 1, 1);

        erosion_kernelsize = new QSlider(morpho_box);
        erosion_kernelsize->setObjectName(QString::fromUtf8("erosion_kernelsize"));
        erosion_kernelsize->setMaximum(30);
        erosion_kernelsize->setValue(5);
        erosion_kernelsize->setOrientation(Qt::Horizontal);
        erosion_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout_3->addWidget(erosion_kernelsize, 2, 2, 1, 1);

        morpho_type = new QComboBox(morpho_box);
        morpho_type->setObjectName(QString::fromUtf8("morpho_type"));

        gridLayout_3->addWidget(morpho_type, 1, 2, 1, 1);

        label_3 = new QLabel(morpho_box);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 1, 1, 1, 1);


        gridLayout_9->addWidget(morpho_box, 4, 0, 1, 1);

        exposure_box = new QGroupBox(scrollAreaWidgetContents_2);
        exposure_box->setObjectName(QString::fromUtf8("exposure_box"));
        exposure_box->setCheckable(true);
        exposure_box->setChecked(false);
        gridLayout_10 = new QGridLayout(exposure_box);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        exposure_val = new QSlider(exposure_box);
        exposure_val->setObjectName(QString::fromUtf8("exposure_val"));
        exposure_val->setMinimum(3);
        exposure_val->setMaximum(2047);
        exposure_val->setOrientation(Qt::Horizontal);
        exposure_val->setTickPosition(QSlider::TicksAbove);
        exposure_val->setTickInterval(0);

        gridLayout_10->addWidget(exposure_val, 0, 0, 1, 1);

        exposure_dsp = new QSpinBox(exposure_box);
        exposure_dsp->setObjectName(QString::fromUtf8("exposure_dsp"));
        exposure_dsp->setMinimum(3);
        exposure_dsp->setMaximum(2047);

        gridLayout_10->addWidget(exposure_dsp, 0, 1, 1, 1);


        gridLayout_9->addWidget(exposure_box, 2, 0, 1, 1);

        fullness_box = new QGroupBox(scrollAreaWidgetContents_2);
        fullness_box->setObjectName(QString::fromUtf8("fullness_box"));
        fullness_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        fullness_box->setFlat(false);
        fullness_box->setCheckable(true);
        fullness_box->setChecked(false);
        gridLayout_6 = new QGridLayout(fullness_box);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_14 = new QLabel(fullness_box);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        fullness_upper = new QSlider(fullness_box);
        fullness_upper->setObjectName(QString::fromUtf8("fullness_upper"));
        fullness_upper->setMaximum(100);
        fullness_upper->setValue(100);
        fullness_upper->setOrientation(Qt::Horizontal);
        fullness_upper->setTickPosition(QSlider::TicksAbove);

        gridLayout_6->addWidget(fullness_upper, 1, 0, 1, 1);

        fullness_lower = new QSlider(fullness_box);
        fullness_lower->setObjectName(QString::fromUtf8("fullness_lower"));
        fullness_lower->setMaximum(100);
        fullness_lower->setValue(3);
        fullness_lower->setOrientation(Qt::Horizontal);
        fullness_lower->setTickPosition(QSlider::TicksAbove);

        gridLayout_6->addWidget(fullness_lower, 2, 0, 1, 1);

        fullness_l_dsp = new QSpinBox(fullness_box);
        fullness_l_dsp->setObjectName(QString::fromUtf8("fullness_l_dsp"));
        fullness_l_dsp->setMaximum(100);
        fullness_l_dsp->setValue(3);

        gridLayout_6->addWidget(fullness_l_dsp, 2, 1, 1, 1);

        fullness_u_dsp = new QSpinBox(fullness_box);
        fullness_u_dsp->setObjectName(QString::fromUtf8("fullness_u_dsp"));
        fullness_u_dsp->setMaximum(100);
        fullness_u_dsp->setValue(100);

        gridLayout_6->addWidget(fullness_u_dsp, 1, 1, 1, 1);


        gridLayout_9->addWidget(fullness_box, 7, 0, 1, 1);

        blur_box = new QGroupBox(scrollAreaWidgetContents_2);
        blur_box->setObjectName(QString::fromUtf8("blur_box"));
        blur_box->setEnabled(true);
        blur_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        blur_box->setFlat(false);
        blur_box->setCheckable(true);
        blur_box->setChecked(false);
        gridLayout = new QGridLayout(blur_box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gaussian_kernelsize = new QSlider(blur_box);
        gaussian_kernelsize->setObjectName(QString::fromUtf8("gaussian_kernelsize"));
        gaussian_kernelsize->setMaximum(5);
        gaussian_kernelsize->setValue(5);
        gaussian_kernelsize->setOrientation(Qt::Horizontal);
        gaussian_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(gaussian_kernelsize, 0, 1, 1, 1);

        g_k_size_disp = new QSpinBox(blur_box);
        g_k_size_disp->setObjectName(QString::fromUtf8("g_k_size_disp"));
        g_k_size_disp->setMaximum(5);
        g_k_size_disp->setValue(5);

        gridLayout->addWidget(g_k_size_disp, 0, 2, 1, 1);

        label_5 = new QLabel(blur_box);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        label_6 = new QLabel(blur_box);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        m_k_size_disp = new QSpinBox(blur_box);
        m_k_size_disp->setObjectName(QString::fromUtf8("m_k_size_disp"));
        m_k_size_disp->setMaximum(5);

        gridLayout->addWidget(m_k_size_disp, 1, 2, 1, 1);

        median_kernelsize = new QSlider(blur_box);
        median_kernelsize->setObjectName(QString::fromUtf8("median_kernelsize"));
        median_kernelsize->setMaximum(5);
        median_kernelsize->setOrientation(Qt::Horizontal);
        median_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(median_kernelsize, 1, 1, 1, 1);


        gridLayout_9->addWidget(blur_box, 3, 0, 1, 1);

        settings->setWidget(scrollAreaWidgetContents_2);
        image_out = new QLabel(targeting_tab);
        image_out->setObjectName(QString::fromUtf8("image_out"));
        image_out->setGeometry(QRect(350, 30, 640, 480));
        display_raw = new QCheckBox(targeting_tab);
        display_raw->setObjectName(QString::fromUtf8("display_raw"));
        display_raw->setGeometry(QRect(340, 0, 101, 22));
        display_raw->setChecked(true);
        display_raw->setTristate(false);
        display_processed = new QCheckBox(targeting_tab);
        display_processed->setObjectName(QString::fromUtf8("display_processed"));
        display_processed->setGeometry(QRect(450, 0, 141, 22));
        display_processed->setChecked(true);
        tabs->addTab(targeting_tab, QString());
        settings->raise();
        image_out->raise();
        numeric_output->raise();
        display_raw->raise();
        display_processed->raise();
        networking_tab = new QWidget();
        networking_tab->setObjectName(QString::fromUtf8("networking_tab"));
        tabs->addTab(networking_tab, QString());
        camera_settings = new QWidget();
        camera_settings->setObjectName(QString::fromUtf8("camera_settings"));
        camera_settings_2 = new QTreeWidget(camera_settings);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(camera_settings_2);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        new QTreeWidgetItem(__qtreewidgetitem1);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem2->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem2);
        __qtreewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem4->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(__qtreewidgetitem4);
        __qtreewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem6->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem6);
        __qtreewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem8 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem9 = new QTreeWidgetItem(__qtreewidgetitem8);
        __qtreewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem10 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem11 = new QTreeWidgetItem(__qtreewidgetitem10);
        __qtreewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem12 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem13 = new QTreeWidgetItem(__qtreewidgetitem12);
        __qtreewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem14 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem15 = new QTreeWidgetItem(__qtreewidgetitem14);
        __qtreewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem16 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem16->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem17 = new QTreeWidgetItem(__qtreewidgetitem16);
        __qtreewidgetitem17->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem18 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem19 = new QTreeWidgetItem(__qtreewidgetitem18);
        __qtreewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem20 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem20->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem21 = new QTreeWidgetItem(__qtreewidgetitem20);
        __qtreewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem22 = new QTreeWidgetItem(camera_settings_2);
        QTreeWidgetItem *__qtreewidgetitem23 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem24 = new QTreeWidgetItem(__qtreewidgetitem23);
        __qtreewidgetitem24->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem25 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem26 = new QTreeWidgetItem(__qtreewidgetitem25);
        __qtreewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem27 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem27->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem28 = new QTreeWidgetItem(__qtreewidgetitem27);
        __qtreewidgetitem28->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem29 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem29->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem30 = new QTreeWidgetItem(__qtreewidgetitem29);
        __qtreewidgetitem30->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem31 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem31->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem32 = new QTreeWidgetItem(__qtreewidgetitem31);
        __qtreewidgetitem32->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem33 = new QTreeWidgetItem(__qtreewidgetitem22);
        __qtreewidgetitem33->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        QTreeWidgetItem *__qtreewidgetitem34 = new QTreeWidgetItem(__qtreewidgetitem33);
        __qtreewidgetitem34->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsEnabled);
        camera_settings_2->setObjectName(QString::fromUtf8("camera_settings_2"));
        camera_settings_2->setGeometry(QRect(0, 0, 371, 571));
        camera_settings_2->setInputMethodHints(Qt::ImhDigitsOnly);
        graphicsView = new QGraphicsView(camera_settings);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(380, 120, 381, 351));
        label_4 = new QLabel(camera_settings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 100, 56, 17));
        label_2 = new QLabel(camera_settings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(390, 30, 361, 17));
        tabs->addTab(camera_settings, QString());
        menu = new QWidget();
        menu->setObjectName(QString::fromUtf8("menu"));
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(9, 558, 85, 27));
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(9, 591, 85, 27));
        lineEdit = new QLineEdit(menu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 558, 661, 27));
        lineEdit_2 = new QLineEdit(menu);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 591, 661, 27));
        label_21 = new QLabel(menu);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(100, 540, 59, 17));
        tabs->addTab(menu, QString());
        DawgmaVision->setCentralWidget(centralwidget);

        retranslateUi(DawgmaVision);
        QObject::connect(gaussian_kernelsize, SIGNAL(valueChanged(int)), g_k_size_disp, SLOT(setValue(int)));
        QObject::connect(g_k_size_disp, SIGNAL(valueChanged(int)), gaussian_kernelsize, SLOT(setValue(int)));
        QObject::connect(median_kernelsize, SIGNAL(valueChanged(int)), m_k_size_disp, SLOT(setValue(int)));
        QObject::connect(m_k_size_disp, SIGNAL(valueChanged(int)), median_kernelsize, SLOT(setValue(int)));
        QObject::connect(h_upper, SIGNAL(valueChanged(int)), h_u_dsp, SLOT(setValue(int)));
        QObject::connect(h_u_dsp, SIGNAL(valueChanged(int)), h_upper, SLOT(setValue(int)));
        QObject::connect(s_u_dsp, SIGNAL(valueChanged(int)), s_upper, SLOT(setValue(int)));
        QObject::connect(s_upper, SIGNAL(valueChanged(int)), s_u_dsp, SLOT(setValue(int)));
        QObject::connect(h_lower, SIGNAL(valueChanged(int)), h_l_dsp, SLOT(setValue(int)));
        QObject::connect(h_l_dsp, SIGNAL(valueChanged(int)), h_lower, SLOT(setValue(int)));
        QObject::connect(s_lower, SIGNAL(valueChanged(int)), s_l_dsp, SLOT(setValue(int)));
        QObject::connect(s_l_dsp, SIGNAL(valueChanged(int)), s_lower, SLOT(setValue(int)));
        QObject::connect(v_upper, SIGNAL(valueChanged(int)), v_u_dsp, SLOT(setValue(int)));
        QObject::connect(v_lower, SIGNAL(valueChanged(int)), v_l_dsp, SLOT(setValue(int)));
        QObject::connect(v_u_dsp, SIGNAL(valueChanged(int)), v_upper, SLOT(setValue(int)));
        QObject::connect(v_l_dsp, SIGNAL(valueChanged(int)), v_lower, SLOT(setValue(int)));
        QObject::connect(erosion_kernelsize, SIGNAL(valueChanged(int)), e_k_size_disp, SLOT(setValue(int)));
        QObject::connect(dilation_kernelsize, SIGNAL(valueChanged(int)), d_k_size_disp, SLOT(setValue(int)));
        QObject::connect(e_k_size_disp, SIGNAL(valueChanged(int)), erosion_kernelsize, SLOT(setValue(int)));
        QObject::connect(d_k_size_disp, SIGNAL(valueChanged(int)), dilation_kernelsize, SLOT(setValue(int)));
        QObject::connect(num_vert, SIGNAL(valueChanged(int)), num_vert_dsp, SLOT(setValue(int)));
        QObject::connect(num_vert_dsp, SIGNAL(valueChanged(int)), num_vert, SLOT(setValue(int)));
        QObject::connect(area_upper, SIGNAL(valueChanged(int)), area_u_dsp, SLOT(setValue(int)));
        QObject::connect(area_u_dsp, SIGNAL(valueChanged(int)), area_upper, SLOT(setValue(int)));
        QObject::connect(area_lower, SIGNAL(valueChanged(int)), area_l_dsp, SLOT(setValue(int)));
        QObject::connect(area_l_dsp, SIGNAL(valueChanged(int)), area_lower, SLOT(setValue(int)));
        QObject::connect(fullness_upper, SIGNAL(valueChanged(int)), fullness_u_dsp, SLOT(setValue(int)));
        QObject::connect(fullness_u_dsp, SIGNAL(valueChanged(int)), fullness_upper, SLOT(setValue(int)));
        QObject::connect(fullness_l_dsp, SIGNAL(valueChanged(int)), fullness_lower, SLOT(setValue(int)));
        QObject::connect(fullness_lower, SIGNAL(valueChanged(int)), fullness_l_dsp, SLOT(setValue(int)));
        QObject::connect(arat_lower, SIGNAL(valueChanged(int)), arat_l_dsp, SLOT(setValue(int)));
        QObject::connect(arat_u_dsp, SIGNAL(valueChanged(int)), arat_upper, SLOT(setValue(int)));
        QObject::connect(arat_l_dsp, SIGNAL(valueChanged(int)), arat_lower, SLOT(setValue(int)));
        QObject::connect(arat_upper, SIGNAL(valueChanged(int)), arat_u_dsp, SLOT(setValue(int)));
        QObject::connect(exposure_dsp, SIGNAL(valueChanged(int)), exposure_val, SLOT(setValue(int)));
        QObject::connect(exposure_val, SIGNAL(valueChanged(int)), exposure_dsp, SLOT(setValue(int)));

        tabs->setCurrentIndex(0);
        morpho_type->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DawgmaVision);
    } // setupUi

    void retranslateUi(QMainWindow *DawgmaVision)
    {
        DawgmaVision->setWindowTitle(QApplication::translate("DawgmaVision", "Dawgma1712 Vision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        targeting_tab->setToolTip(QApplication::translate("DawgmaVision", "<html><head/><body><p>This tab lets you edit all the vision and targeting related stuff.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        targeting_tab->setAccessibleName(QApplication::translate("DawgmaVision", "Targeting", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        targeting_tab->setAccessibleDescription(QApplication::translate("DawgmaVision", "This tab lets you edit all the vision and targeting related stuff.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label_18->setText(QApplication::translate("DawgmaVision", "Area:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("DawgmaVision", "Num. Vertices:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("DawgmaVision", "Aspect Ratio:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("DawgmaVision", "Fullness:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("DawgmaVision", "Center X and Y:", 0, QApplication::UnicodeUTF8));
        shape_box->setTitle(QApplication::translate("DawgmaVision", "Shape Filter", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DawgmaVision", "Num Vertices", 0, QApplication::UnicodeUTF8));
        aspect_box->setTitle(QApplication::translate("DawgmaVision", "Aspect Ratio Filter", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("DawgmaVision", "Aspect Ratio", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DawgmaVision", "divide by 10 for decimal", 0, QApplication::UnicodeUTF8));
        threshold_box->setTitle(QApplication::translate("DawgmaVision", "Thresholding", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DawgmaVision", "S", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DawgmaVision", "H", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("DawgmaVision", "V", 0, QApplication::UnicodeUTF8));
        area_box->setTitle(QApplication::translate("DawgmaVision", "Area Filter", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DawgmaVision", "Percent of Image", 0, QApplication::UnicodeUTF8));
        morpho_box->setTitle(QApplication::translate("DawgmaVision", "Erosion and Dilation", 0, QApplication::UnicodeUTF8));
        ed_kernel_shape->clear();
        ed_kernel_shape->insertItems(0, QStringList()
         << QApplication::translate("DawgmaVision", "Rectangle", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DawgmaVision", "Cross", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DawgmaVision", "Ellipse", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("DawgmaVision", "Kernel Shape", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DawgmaVision", "D. Kernel Size", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DawgmaVision", "E. Kernel Size", 0, QApplication::UnicodeUTF8));
        morpho_type->clear();
        morpho_type->insertItems(0, QStringList()
         << QApplication::translate("DawgmaVision", "Opening (Noise)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DawgmaVision", "Closing (Holes)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DawgmaVision", "Both", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("DawgmaVision", "Operation Type", 0, QApplication::UnicodeUTF8));
        exposure_box->setTitle(QApplication::translate("DawgmaVision", "Exposure", 0, QApplication::UnicodeUTF8));
        fullness_box->setTitle(QApplication::translate("DawgmaVision", "Fullness Filter", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DawgmaVision", "Percent Fullness", 0, QApplication::UnicodeUTF8));
        blur_box->setTitle(QApplication::translate("DawgmaVision", "Gaussian and Median Blur", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DawgmaVision", "G. Kernel Size", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DawgmaVision", "M. Kernel Size", 0, QApplication::UnicodeUTF8));
        image_out->setText(QString());
        display_raw->setText(QApplication::translate("DawgmaVision", "Display Raw?", 0, QApplication::UnicodeUTF8));
        display_processed->setText(QApplication::translate("DawgmaVision", "Display Processed?", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(targeting_tab), QApplication::translate("DawgmaVision", "Targeting", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        networking_tab->setToolTip(QApplication::translate("DawgmaVision", "<html><head/><body><p>This tab lets you edit networking settings.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        networking_tab->setAccessibleName(QApplication::translate("DawgmaVision", "Networking", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        networking_tab->setAccessibleDescription(QApplication::translate("DawgmaVision", "This tab lets you edit networking settings.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        tabs->setTabText(tabs->indexOf(networking_tab), QApplication::translate("DawgmaVision", "Networking Controls", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = camera_settings_2->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("DawgmaVision", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("DawgmaVision", "Camera Settings", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = camera_settings_2->isSortingEnabled();
        camera_settings_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = camera_settings_2->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("DawgmaVision", "These are values that range in number", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("DawgmaVision", "Value Type Settings", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("DawgmaVision", "White Balance Temperature  ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(1, QApplication::translate("DawgmaVision", "4000", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("DawgmaVision", "Value (2000-6500)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("DawgmaVision", "Zoom", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(1, QApplication::translate("DawgmaVision", "100", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("DawgmaVision", "Value  (100-500)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("DawgmaVision", "Focus ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(1, QApplication::translate("DawgmaVision", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("DawgmaVision", "Value (0-250)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("DawgmaVision", "Tilt", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(1, QApplication::translate("DawgmaVision", "3600", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem9->setText(0, QApplication::translate("DawgmaVision", "Value  (-36000 to 36000)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem10->setText(0, QApplication::translate("DawgmaVision", "Pan", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(1, QApplication::translate("DawgmaVision", "3600", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem11->setText(0, QApplication::translate("DawgmaVision", "Value  (-36000 to 36000)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem12->setText(0, QApplication::translate("DawgmaVision", "Exposure", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem12->child(0);
        ___qtreewidgetitem13->setText(1, QApplication::translate("DawgmaVision", "100", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem13->setText(0, QApplication::translate("DawgmaVision", "Value  (3-2047)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem14->setText(0, QApplication::translate("DawgmaVision", "Sharpness", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(1, QApplication::translate("DawgmaVision", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem15->setText(0, QApplication::translate("DawgmaVision", "Value  (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem1->child(7);
        ___qtreewidgetitem16->setText(0, QApplication::translate("DawgmaVision", "Gain ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(1, QApplication::translate("DawgmaVision", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem17->setText(0, QApplication::translate("DawgmaVision", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem1->child(8);
        ___qtreewidgetitem18->setText(0, QApplication::translate("DawgmaVision", "Brightness ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem18->child(0);
        ___qtreewidgetitem19->setText(1, QApplication::translate("DawgmaVision", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem19->setText(0, QApplication::translate("DawgmaVision", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem1->child(9);
        ___qtreewidgetitem20->setText(0, QApplication::translate("DawgmaVision", "Contrast ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(1, QApplication::translate("DawgmaVision", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem21->setText(0, QApplication::translate("DawgmaVision", " Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem1->child(10);
        ___qtreewidgetitem22->setText(0, QApplication::translate("DawgmaVision", "Saturation ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem22->child(0);
        ___qtreewidgetitem23->setText(1, QApplication::translate("DawgmaVision", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem23->setText(0, QApplication::translate("DawgmaVision", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem24 = camera_settings_2->topLevelItem(1);
        ___qtreewidgetitem24->setText(1, QApplication::translate("DawgmaVision", "These are booleans", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem24->setText(0, QApplication::translate("DawgmaVision", "On/Off Type Settings", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem24->child(0);
        ___qtreewidgetitem25->setText(0, QApplication::translate("DawgmaVision", "white_balance_temperature_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem25->child(0);
        ___qtreewidgetitem26->setText(1, QApplication::translate("DawgmaVision", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem26->setText(0, QApplication::translate("DawgmaVision", "Value (Can only be 1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem24->child(1);
        ___qtreewidgetitem27->setText(0, QApplication::translate("DawgmaVision", "power_line_frequency ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem27->child(0);
        ___qtreewidgetitem28->setText(1, QApplication::translate("DawgmaVision", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem28->setText(0, QApplication::translate("DawgmaVision", "Value (0-2)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem24->child(2);
        ___qtreewidgetitem29->setText(0, QApplication::translate("DawgmaVision", "backlight_compensation", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem30 = ___qtreewidgetitem29->child(0);
        ___qtreewidgetitem30->setText(1, QApplication::translate("DawgmaVision", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem30->setText(0, QApplication::translate("DawgmaVision", "Value (0-1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem24->child(3);
        ___qtreewidgetitem31->setText(0, QApplication::translate("DawgmaVision", "exposure_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem32 = ___qtreewidgetitem31->child(0);
        ___qtreewidgetitem32->setText(1, QApplication::translate("DawgmaVision", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem32->setText(0, QApplication::translate("DawgmaVision", "Value (0-3)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem24->child(4);
        ___qtreewidgetitem33->setText(0, QApplication::translate("DawgmaVision", "exposure_auto_priority", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem34 = ___qtreewidgetitem33->child(0);
        ___qtreewidgetitem34->setText(1, QApplication::translate("DawgmaVision", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem34->setText(0, QApplication::translate("DawgmaVision", "Value (0-1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem35 = ___qtreewidgetitem24->child(5);
        ___qtreewidgetitem35->setText(0, QApplication::translate("DawgmaVision", "focus_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem36 = ___qtreewidgetitem35->child(0);
        ___qtreewidgetitem36->setText(1, QApplication::translate("DawgmaVision", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem36->setText(0, QApplication::translate("DawgmaVision", "Value (Can only be 1)", 0, QApplication::UnicodeUTF8));
        camera_settings_2->setSortingEnabled(__sortingEnabled);

        label_4->setText(QApplication::translate("DawgmaVision", "Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DawgmaVision", "NOTE: Some cameras will not allow editing all these settings!", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(camera_settings), QApplication::translate("DawgmaVision", "Camera Settings", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DawgmaVision", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DawgmaVision", "Load", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("DawgmaVision", "Filename", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(menu), QApplication::translate("DawgmaVision", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DawgmaVision: public Ui_DawgmaVision {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAWGMAVISION_H
