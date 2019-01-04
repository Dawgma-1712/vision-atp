/********************************************************************************
** Form generated from reading UI file 'DawgmaVision.ui'
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
#include "QxtSpanSlider"

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QWidget *gui_container;
    QTabWidget *tabs;
    QWidget *targeting_tab;
    QGraphicsView *image_out;
    QLabel *label;
    QScrollArea *numeric_output;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_8;
    QLabel *label_16;
    QLCDNumber *lcdNumber_5;
    QLCDNumber *lcdNumber_6;
    QLabel *label_17;
    QLCDNumber *lcdNumber;
    QLabel *label_18;
    QLCDNumber *lcdNumber_2;
    QLabel *label_19;
    QLCDNumber *lcdNumber_3;
    QLabel *label_20;
    QLCDNumber *lcdNumber_4;
    QScrollArea *settings;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_9;
    QGroupBox *area_box;
    QGridLayout *gridLayout_5;
    QSpinBox *area_u_dsp;
    QSpinBox *area_l_dsp;
    QxtSpanSlider *area_span;
    QLabel *label_13;
    QGroupBox *blur_box;
    QGridLayout *gridLayout;
    QSlider *gaussian_kernelsize;
    QSpinBox *g_k_size_disp;
    QLabel *label_5;
    QLabel *label_6;
    QSpinBox *m_k_size_disp;
    QSlider *median_kernelsize;
    QGroupBox *threshold_box;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QSpinBox *h_u_dsp;
    QSpinBox *h_l_dsp;
    QLabel *label_10;
    QSpinBox *s_u_dsp;
    QSpinBox *s_l_dsp;
    QSpinBox *v_u_dsp;
    QSpinBox *v_l_dsp;
    QxtSpanSlider *h_threshold;
    QxtSpanSlider *s_threshold;
    QxtSpanSlider *v_threshold;
    QLabel *label_11;
    QGroupBox *fullness_box;
    QGridLayout *gridLayout_6;
    QSpinBox *fullness_l_dsp;
    QSpinBox *fullness_u_dsp;
    QLabel *label_14;
    QxtSpanSlider *fullness_span;
    QGroupBox *morpho_box;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QSlider *erosion_kernelsize;
    QSpinBox *e_k_size_disp;
    QLabel *label_8;
    QSlider *dilation_kernelsize;
    QSpinBox *d_k_size_disp;
    QGroupBox *shape_box;
    QGridLayout *gridLayout_4;
    QSpinBox *num_vert_dsp;
    QLabel *label_12;
    QSlider *num_vert;
    QGroupBox *aspect_box;
    QGridLayout *gridLayout_7;
    QSpinBox *arat_l_dsp;
    QSpinBox *arat_u_dsp;
    QxtSpanSlider *aratio_span;
    QLabel *label_15;
    QLabel *label_24;
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

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QString::fromUtf8("window"));
        window->resize(815, 629);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(window->sizePolicy().hasHeightForWidth());
        window->setSizePolicy(sizePolicy);
        gui_container = new QWidget(window);
        gui_container->setObjectName(QString::fromUtf8("gui_container"));
        sizePolicy.setHeightForWidth(gui_container->sizePolicy().hasHeightForWidth());
        gui_container->setSizePolicy(sizePolicy);
        tabs = new QTabWidget(gui_container);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setGeometry(QRect(0, 0, 811, 631));
        tabs->setTabPosition(QTabWidget::West);
        tabs->setElideMode(Qt::ElideNone);
        tabs->setDocumentMode(false);
        tabs->setTabsClosable(false);
        tabs->setMovable(false);
        targeting_tab = new QWidget();
        targeting_tab->setObjectName(QString::fromUtf8("targeting_tab"));
        image_out = new QGraphicsView(targeting_tab);
        image_out->setObjectName(QString::fromUtf8("image_out"));
        image_out->setGeometry(QRect(350, 30, 401, 421));
        label = new QLabel(targeting_tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 10, 56, 17));
        numeric_output = new QScrollArea(targeting_tab);
        numeric_output->setObjectName(QString::fromUtf8("numeric_output"));
        numeric_output->setGeometry(QRect(350, 460, 401, 159));
        numeric_output->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 157));
        gridLayout_8 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_8->addWidget(label_16, 0, 0, 1, 1);

        lcdNumber_5 = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout_8->addWidget(lcdNumber_5, 0, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout_8->addWidget(lcdNumber_6, 0, 2, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_8->addWidget(label_17, 1, 0, 1, 1);

        lcdNumber = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout_8->addWidget(lcdNumber, 1, 1, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_8->addWidget(label_18, 2, 0, 1, 1);

        lcdNumber_2 = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout_8->addWidget(lcdNumber_2, 2, 1, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_8->addWidget(label_19, 3, 0, 1, 1);

        lcdNumber_3 = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout_8->addWidget(lcdNumber_3, 3, 1, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_8->addWidget(label_20, 4, 0, 1, 1);

        lcdNumber_4 = new QLCDNumber(scrollAreaWidgetContents);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout_8->addWidget(lcdNumber_4, 4, 1, 1, 1);

        numeric_output->setWidget(scrollAreaWidgetContents);
        settings = new QScrollArea(targeting_tab);
        settings->setObjectName(QString::fromUtf8("settings"));
        settings->setGeometry(QRect(10, 10, 331, 601));
        settings->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, -226, 314, 825));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        area_box = new QGroupBox(scrollAreaWidgetContents_2);
        area_box->setObjectName(QString::fromUtf8("area_box"));
        area_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        area_box->setFlat(false);
        area_box->setCheckable(true);
        gridLayout_5 = new QGridLayout(area_box);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        area_u_dsp = new QSpinBox(area_box);
        area_u_dsp->setObjectName(QString::fromUtf8("area_u_dsp"));
        area_u_dsp->setMaximum(100);
        area_u_dsp->setValue(100);

        gridLayout_5->addWidget(area_u_dsp, 0, 2, 1, 1);

        area_l_dsp = new QSpinBox(area_box);
        area_l_dsp->setObjectName(QString::fromUtf8("area_l_dsp"));
        area_l_dsp->setValue(3);

        gridLayout_5->addWidget(area_l_dsp, 1, 2, 1, 1);

        area_span = new QxtSpanSlider(area_box);
        area_span->setObjectName(QString::fromUtf8("area_span"));
        area_span->setMaximum(100);
        area_span->setOrientation(Qt::Horizontal);
        area_span->setTickPosition(QSlider::TicksAbove);
        area_span->setProperty("lowerValue", QVariant(3));
        area_span->setProperty("upperValue", QVariant(100));

        gridLayout_5->addWidget(area_span, 0, 1, 1, 1);

        label_13 = new QLabel(area_box);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_5->addWidget(label_13, 0, 0, 1, 1);


        gridLayout_9->addWidget(area_box, 4, 0, 1, 1);

        blur_box = new QGroupBox(scrollAreaWidgetContents_2);
        blur_box->setObjectName(QString::fromUtf8("blur_box"));
        blur_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        blur_box->setFlat(false);
        blur_box->setCheckable(true);
        gridLayout = new QGridLayout(blur_box);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gaussian_kernelsize = new QSlider(blur_box);
        gaussian_kernelsize->setObjectName(QString::fromUtf8("gaussian_kernelsize"));
        gaussian_kernelsize->setMaximum(30);
        gaussian_kernelsize->setValue(5);
        gaussian_kernelsize->setOrientation(Qt::Horizontal);
        gaussian_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(gaussian_kernelsize, 0, 1, 1, 1);

        g_k_size_disp = new QSpinBox(blur_box);
        g_k_size_disp->setObjectName(QString::fromUtf8("g_k_size_disp"));
        g_k_size_disp->setMaximum(30);
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
        m_k_size_disp->setMaximum(30);

        gridLayout->addWidget(m_k_size_disp, 1, 2, 1, 1);

        median_kernelsize = new QSlider(blur_box);
        median_kernelsize->setObjectName(QString::fromUtf8("median_kernelsize"));
        median_kernelsize->setMaximum(30);
        median_kernelsize->setOrientation(Qt::Horizontal);
        median_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout->addWidget(median_kernelsize, 1, 1, 1, 1);


        gridLayout_9->addWidget(blur_box, 0, 0, 1, 1);

        threshold_box = new QGroupBox(scrollAreaWidgetContents_2);
        threshold_box->setObjectName(QString::fromUtf8("threshold_box"));
        threshold_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        threshold_box->setFlat(false);
        threshold_box->setCheckable(true);
        gridLayout_2 = new QGridLayout(threshold_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(threshold_box);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        h_u_dsp = new QSpinBox(threshold_box);
        h_u_dsp->setObjectName(QString::fromUtf8("h_u_dsp"));
        h_u_dsp->setMaximum(180);
        h_u_dsp->setValue(180);

        gridLayout_2->addWidget(h_u_dsp, 0, 2, 1, 1);

        h_l_dsp = new QSpinBox(threshold_box);
        h_l_dsp->setObjectName(QString::fromUtf8("h_l_dsp"));
        h_l_dsp->setMaximum(180);

        gridLayout_2->addWidget(h_l_dsp, 1, 2, 1, 1);

        label_10 = new QLabel(threshold_box);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 2, 0, 1, 1);

        s_u_dsp = new QSpinBox(threshold_box);
        s_u_dsp->setObjectName(QString::fromUtf8("s_u_dsp"));
        s_u_dsp->setMaximum(255);
        s_u_dsp->setValue(255);

        gridLayout_2->addWidget(s_u_dsp, 2, 2, 1, 1);

        s_l_dsp = new QSpinBox(threshold_box);
        s_l_dsp->setObjectName(QString::fromUtf8("s_l_dsp"));
        s_l_dsp->setMaximum(255);

        gridLayout_2->addWidget(s_l_dsp, 3, 2, 1, 1);

        v_u_dsp = new QSpinBox(threshold_box);
        v_u_dsp->setObjectName(QString::fromUtf8("v_u_dsp"));
        v_u_dsp->setMaximum(255);
        v_u_dsp->setValue(255);

        gridLayout_2->addWidget(v_u_dsp, 4, 2, 1, 1);

        v_l_dsp = new QSpinBox(threshold_box);
        v_l_dsp->setObjectName(QString::fromUtf8("v_l_dsp"));
        v_l_dsp->setMaximum(255);

        gridLayout_2->addWidget(v_l_dsp, 5, 2, 1, 1);

        h_threshold = new QxtSpanSlider(threshold_box);
        h_threshold->setObjectName(QString::fromUtf8("h_threshold"));
        h_threshold->setMaximum(180);
        h_threshold->setOrientation(Qt::Horizontal);
        h_threshold->setTickPosition(QSlider::TicksAbove);
        h_threshold->setProperty("upperValue", QVariant(180));

        gridLayout_2->addWidget(h_threshold, 0, 1, 2, 1);

        s_threshold = new QxtSpanSlider(threshold_box);
        s_threshold->setObjectName(QString::fromUtf8("s_threshold"));
        s_threshold->setMaximum(255);
        s_threshold->setOrientation(Qt::Horizontal);
        s_threshold->setTickPosition(QSlider::TicksAbove);
        s_threshold->setProperty("upperValue", QVariant(255));

        gridLayout_2->addWidget(s_threshold, 2, 1, 2, 1);

        v_threshold = new QxtSpanSlider(threshold_box);
        v_threshold->setObjectName(QString::fromUtf8("v_threshold"));
        v_threshold->setMaximum(255);
        v_threshold->setOrientation(Qt::Horizontal);
        v_threshold->setTickPosition(QSlider::TicksAbove);
        v_threshold->setProperty("upperValue", QVariant(255));

        gridLayout_2->addWidget(v_threshold, 4, 1, 2, 1);

        label_11 = new QLabel(threshold_box);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);


        gridLayout_9->addWidget(threshold_box, 1, 0, 1, 1);

        fullness_box = new QGroupBox(scrollAreaWidgetContents_2);
        fullness_box->setObjectName(QString::fromUtf8("fullness_box"));
        fullness_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        fullness_box->setFlat(false);
        fullness_box->setCheckable(true);
        gridLayout_6 = new QGridLayout(fullness_box);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        fullness_l_dsp = new QSpinBox(fullness_box);
        fullness_l_dsp->setObjectName(QString::fromUtf8("fullness_l_dsp"));
        fullness_l_dsp->setMaximum(100);
        fullness_l_dsp->setValue(3);

        gridLayout_6->addWidget(fullness_l_dsp, 2, 2, 1, 1);

        fullness_u_dsp = new QSpinBox(fullness_box);
        fullness_u_dsp->setObjectName(QString::fromUtf8("fullness_u_dsp"));
        fullness_u_dsp->setMaximum(100);
        fullness_u_dsp->setValue(100);

        gridLayout_6->addWidget(fullness_u_dsp, 0, 2, 1, 1);

        label_14 = new QLabel(fullness_box);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);

        fullness_span = new QxtSpanSlider(fullness_box);
        fullness_span->setObjectName(QString::fromUtf8("fullness_span"));
        fullness_span->setMaximum(100);
        fullness_span->setOrientation(Qt::Horizontal);
        fullness_span->setTickPosition(QSlider::TicksAbove);
        fullness_span->setProperty("lowerValue", QVariant(3));
        fullness_span->setProperty("upperValue", QVariant(100));

        gridLayout_6->addWidget(fullness_span, 0, 1, 1, 1);


        gridLayout_9->addWidget(fullness_box, 5, 0, 1, 1);

        morpho_box = new QGroupBox(scrollAreaWidgetContents_2);
        morpho_box->setObjectName(QString::fromUtf8("morpho_box"));
        morpho_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        morpho_box->setFlat(false);
        morpho_box->setCheckable(true);
        gridLayout_3 = new QGridLayout(morpho_box);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(morpho_box);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        erosion_kernelsize = new QSlider(morpho_box);
        erosion_kernelsize->setObjectName(QString::fromUtf8("erosion_kernelsize"));
        erosion_kernelsize->setMaximum(30);
        erosion_kernelsize->setValue(5);
        erosion_kernelsize->setOrientation(Qt::Horizontal);
        erosion_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout_3->addWidget(erosion_kernelsize, 0, 1, 1, 1);

        e_k_size_disp = new QSpinBox(morpho_box);
        e_k_size_disp->setObjectName(QString::fromUtf8("e_k_size_disp"));
        e_k_size_disp->setMaximum(30);
        e_k_size_disp->setValue(5);

        gridLayout_3->addWidget(e_k_size_disp, 0, 2, 1, 1);

        label_8 = new QLabel(morpho_box);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 0, 1, 1);

        dilation_kernelsize = new QSlider(morpho_box);
        dilation_kernelsize->setObjectName(QString::fromUtf8("dilation_kernelsize"));
        dilation_kernelsize->setMaximum(30);
        dilation_kernelsize->setValue(5);
        dilation_kernelsize->setOrientation(Qt::Horizontal);
        dilation_kernelsize->setTickPosition(QSlider::TicksAbove);

        gridLayout_3->addWidget(dilation_kernelsize, 1, 1, 1, 1);

        d_k_size_disp = new QSpinBox(morpho_box);
        d_k_size_disp->setObjectName(QString::fromUtf8("d_k_size_disp"));
        d_k_size_disp->setMaximum(30);
        d_k_size_disp->setValue(5);

        gridLayout_3->addWidget(d_k_size_disp, 1, 2, 1, 1);


        gridLayout_9->addWidget(morpho_box, 2, 0, 1, 1);

        shape_box = new QGroupBox(scrollAreaWidgetContents_2);
        shape_box->setObjectName(QString::fromUtf8("shape_box"));
        shape_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        shape_box->setFlat(false);
        shape_box->setCheckable(true);
        gridLayout_4 = new QGridLayout(shape_box);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        num_vert_dsp = new QSpinBox(shape_box);
        num_vert_dsp->setObjectName(QString::fromUtf8("num_vert_dsp"));
        num_vert_dsp->setMaximum(15);
        num_vert_dsp->setValue(4);

        gridLayout_4->addWidget(num_vert_dsp, 0, 2, 1, 1);

        label_12 = new QLabel(shape_box);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 0, 0, 1, 1);

        num_vert = new QSlider(shape_box);
        num_vert->setObjectName(QString::fromUtf8("num_vert"));
        num_vert->setMaximum(15);
        num_vert->setValue(4);
        num_vert->setOrientation(Qt::Horizontal);
        num_vert->setTickPosition(QSlider::TicksAbove);

        gridLayout_4->addWidget(num_vert, 0, 1, 1, 1);


        gridLayout_9->addWidget(shape_box, 3, 0, 1, 1);

        aspect_box = new QGroupBox(scrollAreaWidgetContents_2);
        aspect_box->setObjectName(QString::fromUtf8("aspect_box"));
        aspect_box->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        aspect_box->setFlat(false);
        aspect_box->setCheckable(true);
        gridLayout_7 = new QGridLayout(aspect_box);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        arat_l_dsp = new QSpinBox(aspect_box);
        arat_l_dsp->setObjectName(QString::fromUtf8("arat_l_dsp"));
        arat_l_dsp->setMaximum(200);
        arat_l_dsp->setValue(10);

        gridLayout_7->addWidget(arat_l_dsp, 3, 2, 1, 1);

        arat_u_dsp = new QSpinBox(aspect_box);
        arat_u_dsp->setObjectName(QString::fromUtf8("arat_u_dsp"));
        arat_u_dsp->setMaximum(200);
        arat_u_dsp->setValue(20);

        gridLayout_7->addWidget(arat_u_dsp, 1, 2, 1, 1);

        aratio_span = new QxtSpanSlider(aspect_box);
        aratio_span->setObjectName(QString::fromUtf8("aratio_span"));
        aratio_span->setMaximum(200);
        aratio_span->setSingleStep(1);
        aratio_span->setOrientation(Qt::Horizontal);
        aratio_span->setTickPosition(QSlider::TicksAbove);
        aratio_span->setTickInterval(0);
        aratio_span->setProperty("lowerValue", QVariant(10));
        aratio_span->setProperty("upperValue", QVariant(20));

        gridLayout_7->addWidget(aratio_span, 1, 1, 1, 1);

        label_15 = new QLabel(aspect_box);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_7->addWidget(label_15, 1, 0, 1, 1);

        label_24 = new QLabel(aspect_box);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_7->addWidget(label_24, 3, 1, 1, 1);


        gridLayout_9->addWidget(aspect_box, 6, 0, 1, 1);

        settings->setWidget(scrollAreaWidgetContents_2);
        tabs->addTab(targeting_tab, QString());
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
        window->setCentralWidget(gui_container);

        retranslateUi(window);
        QObject::connect(gaussian_kernelsize, SIGNAL(valueChanged(int)), g_k_size_disp, SLOT(setValue(int)));
        QObject::connect(median_kernelsize, SIGNAL(valueChanged(int)), m_k_size_disp, SLOT(setValue(int)));
        QObject::connect(h_threshold, SIGNAL(upperValueChanged(int)), h_u_dsp, SLOT(setValue(int)));
        QObject::connect(h_threshold, SIGNAL(lowerValueChanged(int)), h_l_dsp, SLOT(setValue(int)));
        QObject::connect(s_threshold, SIGNAL(upperValueChanged(int)), s_u_dsp, SLOT(setValue(int)));
        QObject::connect(s_threshold, SIGNAL(lowerValueChanged(int)), s_l_dsp, SLOT(setValue(int)));
        QObject::connect(v_threshold, SIGNAL(upperValueChanged(int)), v_u_dsp, SLOT(setValue(int)));
        QObject::connect(v_threshold, SIGNAL(lowerValueChanged(int)), v_l_dsp, SLOT(setValue(int)));
        QObject::connect(erosion_kernelsize, SIGNAL(valueChanged(int)), e_k_size_disp, SLOT(setValue(int)));
        QObject::connect(dilation_kernelsize, SIGNAL(valueChanged(int)), d_k_size_disp, SLOT(setValue(int)));
        QObject::connect(num_vert, SIGNAL(valueChanged(int)), num_vert_dsp, SLOT(setValue(int)));
        QObject::connect(area_span, SIGNAL(upperValueChanged(int)), area_u_dsp, SLOT(setValue(int)));
        QObject::connect(area_span, SIGNAL(lowerValueChanged(int)), area_l_dsp, SLOT(setValue(int)));
        QObject::connect(fullness_span, SIGNAL(upperValueChanged(int)), fullness_u_dsp, SLOT(setValue(int)));
        QObject::connect(fullness_span, SIGNAL(lowerValueChanged(int)), fullness_l_dsp, SLOT(setValue(int)));
        QObject::connect(aratio_span, SIGNAL(upperValueChanged(int)), arat_u_dsp, SLOT(setValue(int)));
        QObject::connect(aratio_span, SIGNAL(lowerValueChanged(int)), arat_l_dsp, SLOT(setValue(int)));
        QObject::connect(g_k_size_disp, SIGNAL(valueChanged(int)), gaussian_kernelsize, SLOT(setValue(int)));
        QObject::connect(m_k_size_disp, SIGNAL(valueChanged(int)), median_kernelsize, SLOT(setValue(int)));
        QObject::connect(h_u_dsp, SIGNAL(valueChanged(int)), h_threshold, SLOT(setUpperValue(int)));
        QObject::connect(h_l_dsp, SIGNAL(valueChanged(int)), h_threshold, SLOT(setLowerValue(int)));
        QObject::connect(s_u_dsp, SIGNAL(valueChanged(int)), s_threshold, SLOT(setUpperValue(int)));
        QObject::connect(s_l_dsp, SIGNAL(valueChanged(int)), s_threshold, SLOT(setLowerValue(int)));
        QObject::connect(v_u_dsp, SIGNAL(valueChanged(int)), v_threshold, SLOT(setUpperValue(int)));
        QObject::connect(v_l_dsp, SIGNAL(valueChanged(int)), v_threshold, SLOT(setLowerValue(int)));
        QObject::connect(e_k_size_disp, SIGNAL(valueChanged(int)), erosion_kernelsize, SLOT(setValue(int)));
        QObject::connect(d_k_size_disp, SIGNAL(valueChanged(int)), dilation_kernelsize, SLOT(setValue(int)));
        QObject::connect(num_vert_dsp, SIGNAL(valueChanged(int)), num_vert, SLOT(setValue(int)));
        QObject::connect(area_u_dsp, SIGNAL(valueChanged(int)), area_span, SLOT(setUpperValue(int)));
        QObject::connect(area_l_dsp, SIGNAL(valueChanged(int)), area_span, SLOT(setLowerValue(int)));
        QObject::connect(fullness_u_dsp, SIGNAL(valueChanged(int)), fullness_span, SLOT(setUpperValue(int)));
        QObject::connect(fullness_l_dsp, SIGNAL(valueChanged(int)), fullness_span, SLOT(setLowerValue(int)));
        QObject::connect(arat_u_dsp, SIGNAL(valueChanged(int)), aratio_span, SLOT(setUpperValue(int)));
        QObject::connect(arat_l_dsp, SIGNAL(valueChanged(int)), aratio_span, SLOT(setLowerValue(int)));

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Dawgma1712Vision", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        targeting_tab->setToolTip(QApplication::translate("window", "<html><head/><body><p>This tab lets you edit all the vision and targeting related stuff.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        targeting_tab->setAccessibleName(QApplication::translate("window", "Targeting", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        targeting_tab->setAccessibleDescription(QApplication::translate("window", "This tab lets you edit all the vision and targeting related stuff.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        label->setText(QApplication::translate("window", "Output", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("window", "Center X and Y:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("window", "Num. Vertices:", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("window", "Area:", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("window", "Fullness:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("window", "Aspect Ratio:", 0, QApplication::UnicodeUTF8));
        area_box->setTitle(QApplication::translate("window", "Area Filter", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("window", "Percent of Image", 0, QApplication::UnicodeUTF8));
        blur_box->setTitle(QApplication::translate("window", "Gaussian and Median Blur", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("window", "G. Kernel Size", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("window", "M. Kernel Size", 0, QApplication::UnicodeUTF8));
        threshold_box->setTitle(QApplication::translate("window", "Thresholding", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("window", "H", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("window", "S", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("window", "V", 0, QApplication::UnicodeUTF8));
        fullness_box->setTitle(QApplication::translate("window", "Fullness Filter", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("window", "Percent Fullness", 0, QApplication::UnicodeUTF8));
        morpho_box->setTitle(QApplication::translate("window", "Erosion and Dilation", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("window", "E. Kernel Size", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("window", "D. Kernel Size", 0, QApplication::UnicodeUTF8));
        shape_box->setTitle(QApplication::translate("window", "Shape Filter", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("window", "Num Vertices", 0, QApplication::UnicodeUTF8));
        aspect_box->setTitle(QApplication::translate("window", "Aspect Ratio Filter", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("window", "Aspect Ratio", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("window", "divide by 10 for decimal", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(targeting_tab), QApplication::translate("window", "Targeting", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        networking_tab->setToolTip(QApplication::translate("window", "<html><head/><body><p>This tab lets you edit networking settings.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        networking_tab->setAccessibleName(QApplication::translate("window", "Networking", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        networking_tab->setAccessibleDescription(QApplication::translate("window", "This tab lets you edit networking settings.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        tabs->setTabText(tabs->indexOf(networking_tab), QApplication::translate("window", "Networking Controls", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = camera_settings_2->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("window", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("window", "Camera Settings", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = camera_settings_2->isSortingEnabled();
        camera_settings_2->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = camera_settings_2->topLevelItem(0);
        ___qtreewidgetitem1->setText(1, QApplication::translate("window", "These are values that range in number", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("window", "Value Type Settings", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("window", "White Balance Temperature  ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem2->child(0);
        ___qtreewidgetitem3->setText(1, QApplication::translate("window", "4000", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("window", "Value (2000-6500)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem4->setText(0, QApplication::translate("window", "Zoom", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(1, QApplication::translate("window", "100", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem5->setText(0, QApplication::translate("window", "Value  (100-500)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("window", "Focus ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem6->child(0);
        ___qtreewidgetitem7->setText(1, QApplication::translate("window", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem7->setText(0, QApplication::translate("window", "Value (0-250)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem8->setText(0, QApplication::translate("window", "Tilt", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem8->child(0);
        ___qtreewidgetitem9->setText(1, QApplication::translate("window", "3600", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem9->setText(0, QApplication::translate("window", "Value  (-36000 to 36000)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem10->setText(0, QApplication::translate("window", "Pan", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem10->child(0);
        ___qtreewidgetitem11->setText(1, QApplication::translate("window", "3600", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem11->setText(0, QApplication::translate("window", "Value  (-36000 to 36000)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem1->child(5);
        ___qtreewidgetitem12->setText(0, QApplication::translate("window", "Exposure", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem12->child(0);
        ___qtreewidgetitem13->setText(1, QApplication::translate("window", "100", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem13->setText(0, QApplication::translate("window", "Value  (3-2047)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem1->child(6);
        ___qtreewidgetitem14->setText(0, QApplication::translate("window", "Sharpness", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem14->child(0);
        ___qtreewidgetitem15->setText(1, QApplication::translate("window", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem15->setText(0, QApplication::translate("window", "Value  (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem1->child(7);
        ___qtreewidgetitem16->setText(0, QApplication::translate("window", "Gain ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem17 = ___qtreewidgetitem16->child(0);
        ___qtreewidgetitem17->setText(1, QApplication::translate("window", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem17->setText(0, QApplication::translate("window", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem1->child(8);
        ___qtreewidgetitem18->setText(0, QApplication::translate("window", "Brightness ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem18->child(0);
        ___qtreewidgetitem19->setText(1, QApplication::translate("window", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem19->setText(0, QApplication::translate("window", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem20 = ___qtreewidgetitem1->child(9);
        ___qtreewidgetitem20->setText(0, QApplication::translate("window", "Contrast ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem21 = ___qtreewidgetitem20->child(0);
        ___qtreewidgetitem21->setText(1, QApplication::translate("window", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem21->setText(0, QApplication::translate("window", " Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem22 = ___qtreewidgetitem1->child(10);
        ___qtreewidgetitem22->setText(0, QApplication::translate("window", "Saturation ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem23 = ___qtreewidgetitem22->child(0);
        ___qtreewidgetitem23->setText(1, QApplication::translate("window", "128", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem23->setText(0, QApplication::translate("window", "Value (0-255)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem24 = camera_settings_2->topLevelItem(1);
        ___qtreewidgetitem24->setText(1, QApplication::translate("window", "These are booleans", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem24->setText(0, QApplication::translate("window", "On/Off Type Settings", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem25 = ___qtreewidgetitem24->child(0);
        ___qtreewidgetitem25->setText(0, QApplication::translate("window", "white_balance_temperature_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem26 = ___qtreewidgetitem25->child(0);
        ___qtreewidgetitem26->setText(1, QApplication::translate("window", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem26->setText(0, QApplication::translate("window", "Value (Can only be 1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem27 = ___qtreewidgetitem24->child(1);
        ___qtreewidgetitem27->setText(0, QApplication::translate("window", "power_line_frequency ", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem28 = ___qtreewidgetitem27->child(0);
        ___qtreewidgetitem28->setText(1, QApplication::translate("window", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem28->setText(0, QApplication::translate("window", "Value (0-2)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem29 = ___qtreewidgetitem24->child(2);
        ___qtreewidgetitem29->setText(0, QApplication::translate("window", "backlight_compensation", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem30 = ___qtreewidgetitem29->child(0);
        ___qtreewidgetitem30->setText(1, QApplication::translate("window", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem30->setText(0, QApplication::translate("window", "Value (0-1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem31 = ___qtreewidgetitem24->child(3);
        ___qtreewidgetitem31->setText(0, QApplication::translate("window", "exposure_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem32 = ___qtreewidgetitem31->child(0);
        ___qtreewidgetitem32->setText(1, QApplication::translate("window", "3", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem32->setText(0, QApplication::translate("window", "Value (0-3)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem33 = ___qtreewidgetitem24->child(4);
        ___qtreewidgetitem33->setText(0, QApplication::translate("window", "exposure_auto_priority", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem34 = ___qtreewidgetitem33->child(0);
        ___qtreewidgetitem34->setText(1, QApplication::translate("window", "0", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem34->setText(0, QApplication::translate("window", "Value (0-1)", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem35 = ___qtreewidgetitem24->child(5);
        ___qtreewidgetitem35->setText(0, QApplication::translate("window", "focus_auto", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem36 = ___qtreewidgetitem35->child(0);
        ___qtreewidgetitem36->setText(1, QApplication::translate("window", "1", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem36->setText(0, QApplication::translate("window", "Value (Can only be 1)", 0, QApplication::UnicodeUTF8));
        camera_settings_2->setSortingEnabled(__sortingEnabled);

        label_4->setText(QApplication::translate("window", "Preview", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("window", "NOTE: Some cameras will not allow editing all these settings!", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(camera_settings), QApplication::translate("window", "Camera Settings", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("window", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("window", "Load", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("window", "Filename", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(menu), QApplication::translate("window", "Menu", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAWGMAVISION_H
