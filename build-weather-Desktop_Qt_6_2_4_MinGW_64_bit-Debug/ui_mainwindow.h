/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTypeIcon;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTemp;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblCity;
    QHBoxLayout *horizontalLayout;
    QLabel *lblType;
    QFrame *line;
    QLabel *lblLowHigh;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leCity;
    QPushButton *btnSearch;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblDate;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QLabel *lblGanMao_2;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_16;
    QLabel *lblWindIcon_2;
    QVBoxLayout *verticalLayout_11;
    QLabel *lblWindFx_2;
    QLabel *lblWindFl_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lblPm25Icon_2;
    QVBoxLayout *verticalLayout_12;
    QLabel *lblPM25Title_2;
    QLabel *lblPM25_2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *lblShiDuIcon_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblShiDuTitle_2;
    QLabel *lblShiDu_2;
    QHBoxLayout *horizontalLayout_19;
    QLabel *lblQualityIcon_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *lblQualityTitle_2;
    QLabel *lblQuality_2;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *lblWeek0;
    QLabel *lblWeek1;
    QLabel *lblWeek2;
    QLabel *lblWeek3;
    QLabel *lblWeek4;
    QLabel *lblWeek5;
    QLabel *lblDate0;
    QLabel *lblDate1;
    QLabel *lblDate2;
    QLabel *lblDate3;
    QLabel *lblDate4;
    QLabel *lblDate5;
    QWidget *widget_7;
    QGridLayout *gridLayout_4;
    QLabel *lblTypeIcon3;
    QLabel *lblTypeIcon0;
    QLabel *lblTypeIcon2;
    QLabel *lblType0;
    QLabel *lblType3;
    QLabel *lblTypeIcon5;
    QLabel *lblType5;
    QLabel *lblType4;
    QLabel *lblTypeIcon1;
    QLabel *lblType2;
    QLabel *lblTypeIcon4;
    QLabel *lblType1;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblQuality0;
    QLabel *lblQuality1;
    QLabel *lblQuality2;
    QLabel *lblQuality3;
    QLabel *lblQuality4;
    QLabel *lblQuality5;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_14;
    QLabel *lblHighCurve;
    QLabel *lblLowCurve;
    QWidget *widget_13;
    QGridLayout *gridLayout_5;
    QLabel *lblFx0;
    QLabel *lblFx1;
    QLabel *lblFx2;
    QLabel *lblFx3;
    QLabel *lblFx4;
    QLabel *lblFx5;
    QLabel *lblFl0;
    QLabel *lblFl1;
    QLabel *lblFl2;
    QLabel *lblFl3;
    QLabel *lblFl4;
    QLabel *lblFl5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 500));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
"\n"
"QLabel {\n"
"	font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 70, 341, 121));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(157, 133, 255, 0);\n"
"border-radius: 15px"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblTypeIcon = new QLabel(widget_3);
        lblTypeIcon->setObjectName(QString::fromUtf8("lblTypeIcon"));
        lblTypeIcon->setMinimumSize(QSize(110, 110));
        lblTypeIcon->setMaximumSize(QSize(110, 110));
        lblTypeIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblTypeIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon->setScaledContents(true);
        lblTypeIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lblTypeIcon);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblTemp = new QLabel(widget_3);
        lblTemp->setObjectName(QString::fromUtf8("lblTemp"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        lblTemp->setFont(font);
        lblTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 40pt \"Arial\";\n"
"background-color: rgba(0, 255, 255, 0);"));
        lblTemp->setScaledContents(true);
        lblTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblTemp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 40);
        lblCity = new QLabel(widget_3);
        lblCity->setObjectName(QString::fromUtf8("lblCity"));
        lblCity->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblCity);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblType = new QLabel(widget_3);
        lblType->setObjectName(QString::fromUtf8("lblType"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblType->sizePolicy().hasHeightForWidth());
        lblType->setSizePolicy(sizePolicy);
        lblType->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblType->setScaledContents(true);
        lblType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblType);

        line = new QFrame(widget_3);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(0, 15));
        line->setMaximumSize(QSize(16777215, 15));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        lblLowHigh = new QLabel(widget_3);
        lblLowHigh->setObjectName(QString::fromUtf8("lblLowHigh"));
        lblLowHigh->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblLowHigh->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblLowHigh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(0, 0, 801, 49));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 170, 255,0);"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(15, -1, 20, -1);
        leCity = new QLineEdit(widget_4);
        leCity->setObjectName(QString::fromUtf8("leCity"));
        leCity->setMinimumSize(QSize(200, 0));
        leCity->setMaximumSize(QSize(200, 16777215));
        leCity->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"padding: 1px 5px"));

        horizontalLayout_4->addWidget(leCity);

        btnSearch = new QPushButton(widget_4);
        btnSearch->setObjectName(QString::fromUtf8("btnSearch"));
        btnSearch->setCursor(QCursor(Qt::OpenHandCursor));
        btnSearch->setMouseTracking(false);
        btnSearch->setStyleSheet(QString::fromUtf8("background-color: rgba(157, 133, 255,0);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearch->setIcon(icon);

        horizontalLayout_4->addWidget(btnSearch);

        horizontalSpacer_3 = new QSpacerItem(309, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        lblDate = new QLabel(widget_4);
        lblDate->setObjectName(QString::fromUtf8("lblDate"));
        lblDate->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblDate->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblDate);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(10, 190, 341, 241));
        verticalLayout_10 = new QVBoxLayout(widget_11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        lblGanMao_2 = new QLabel(widget_11);
        lblGanMao_2->setObjectName(QString::fromUtf8("lblGanMao_2"));
        lblGanMao_2->setStyleSheet(QString::fromUtf8("background-color: rgba(60, 60, 60, 0);\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        lblGanMao_2->setWordWrap(true);

        verticalLayout_10->addWidget(lblGanMao_2);

        widget_5 = new QWidget(widget_11);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 133, 255);\n"
"border-radius: 15px"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(50);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(40, 25, 40, 25);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        lblWindIcon_2 = new QLabel(widget_5);
        lblWindIcon_2->setObjectName(QString::fromUtf8("lblWindIcon_2"));
        lblWindIcon_2->setMinimumSize(QSize(40, 40));
        lblWindIcon_2->setMaximumSize(QSize(40, 40));
        lblWindIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblWindIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/wind.png")));
        lblWindIcon_2->setScaledContents(true);
        lblWindIcon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lblWindIcon_2);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        lblWindFx_2 = new QLabel(widget_5);
        lblWindFx_2->setObjectName(QString::fromUtf8("lblWindFx_2"));
        lblWindFx_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lblWindFx_2);

        lblWindFl_2 = new QLabel(widget_5);
        lblWindFl_2->setObjectName(QString::fromUtf8("lblWindFl_2"));
        lblWindFl_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFl_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(lblWindFl_2);


        horizontalLayout_16->addLayout(verticalLayout_11);


        gridLayout_2->addLayout(horizontalLayout_16, 0, 0, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        lblPm25Icon_2 = new QLabel(widget_5);
        lblPm25Icon_2->setObjectName(QString::fromUtf8("lblPm25Icon_2"));
        lblPm25Icon_2->setMinimumSize(QSize(40, 40));
        lblPm25Icon_2->setMaximumSize(QSize(40, 40));
        lblPm25Icon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblPm25Icon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/pm25.png")));
        lblPm25Icon_2->setScaledContents(true);
        lblPm25Icon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_17->addWidget(lblPm25Icon_2);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        lblPM25Title_2 = new QLabel(widget_5);
        lblPM25Title_2->setObjectName(QString::fromUtf8("lblPM25Title_2"));
        lblPM25Title_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25Title_2->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(lblPM25Title_2);

        lblPM25_2 = new QLabel(widget_5);
        lblPM25_2->setObjectName(QString::fromUtf8("lblPM25_2"));
        lblPM25_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25_2->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(lblPM25_2);


        horizontalLayout_17->addLayout(verticalLayout_12);


        gridLayout_2->addLayout(horizontalLayout_17, 0, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(0);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        lblShiDuIcon_2 = new QLabel(widget_5);
        lblShiDuIcon_2->setObjectName(QString::fromUtf8("lblShiDuIcon_2"));
        lblShiDuIcon_2->setMinimumSize(QSize(40, 40));
        lblShiDuIcon_2->setMaximumSize(QSize(40, 40));
        lblShiDuIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblShiDuIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/humidity.png")));
        lblShiDuIcon_2->setScaledContents(true);
        lblShiDuIcon_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(lblShiDuIcon_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lblShiDuTitle_2 = new QLabel(widget_5);
        lblShiDuTitle_2->setObjectName(QString::fromUtf8("lblShiDuTitle_2"));
        lblShiDuTitle_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDuTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblShiDuTitle_2);

        lblShiDu_2 = new QLabel(widget_5);
        lblShiDu_2->setObjectName(QString::fromUtf8("lblShiDu_2"));
        lblShiDu_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDu_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(lblShiDu_2);


        horizontalLayout_18->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_18, 1, 0, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(0);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        lblQualityIcon_2 = new QLabel(widget_5);
        lblQualityIcon_2->setObjectName(QString::fromUtf8("lblQualityIcon_2"));
        lblQualityIcon_2->setMinimumSize(QSize(40, 40));
        lblQualityIcon_2->setMaximumSize(QSize(40, 40));
        lblQualityIcon_2->setAutoFillBackground(false);
        lblQualityIcon_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblQualityIcon_2->setPixmap(QPixmap(QString::fromUtf8(":/res/aqi.png")));
        lblQualityIcon_2->setScaledContents(true);
        lblQualityIcon_2->setAlignment(Qt::AlignCenter);
        lblQualityIcon_2->setWordWrap(false);
        lblQualityIcon_2->setIndent(-1);

        horizontalLayout_19->addWidget(lblQualityIcon_2);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        lblQualityTitle_2 = new QLabel(widget_5);
        lblQualityTitle_2->setObjectName(QString::fromUtf8("lblQualityTitle_2"));
        lblQualityTitle_2->setAutoFillBackground(false);
        lblQualityTitle_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQualityTitle_2->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lblQualityTitle_2);

        lblQuality_2 = new QLabel(widget_5);
        lblQuality_2->setObjectName(QString::fromUtf8("lblQuality_2"));
        lblQuality_2->setAutoFillBackground(false);
        lblQuality_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQuality_2->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(lblQuality_2);


        horizontalLayout_19->addLayout(verticalLayout_13);


        gridLayout_2->addLayout(horizontalLayout_19, 1, 1, 1, 1);


        verticalLayout_10->addWidget(widget_5);

        widget_12 = new QWidget(widget);
        widget_12->setObjectName(QString::fromUtf8("widget_12"));
        widget_12->setGeometry(QRect(360, 40, 451, 411));
        verticalLayout_5 = new QVBoxLayout(widget_12);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        widget_6 = new QWidget(widget_12);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(0);
        lblWeek0 = new QLabel(widget_6);
        lblWeek0->setObjectName(QString::fromUtf8("lblWeek0"));
        lblWeek0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek0, 0, 0, 1, 1);

        lblWeek1 = new QLabel(widget_6);
        lblWeek1->setObjectName(QString::fromUtf8("lblWeek1"));
        lblWeek1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek1, 0, 1, 1, 1);

        lblWeek2 = new QLabel(widget_6);
        lblWeek2->setObjectName(QString::fromUtf8("lblWeek2"));
        lblWeek2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek2, 0, 2, 1, 1);

        lblWeek3 = new QLabel(widget_6);
        lblWeek3->setObjectName(QString::fromUtf8("lblWeek3"));
        lblWeek3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek3, 0, 3, 1, 1);

        lblWeek4 = new QLabel(widget_6);
        lblWeek4->setObjectName(QString::fromUtf8("lblWeek4"));
        lblWeek4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek4, 0, 4, 1, 1);

        lblWeek5 = new QLabel(widget_6);
        lblWeek5->setObjectName(QString::fromUtf8("lblWeek5"));
        lblWeek5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblWeek5, 0, 5, 1, 1);

        lblDate0 = new QLabel(widget_6);
        lblDate0->setObjectName(QString::fromUtf8("lblDate0"));
        lblDate0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate0, 1, 0, 1, 1);

        lblDate1 = new QLabel(widget_6);
        lblDate1->setObjectName(QString::fromUtf8("lblDate1"));
        lblDate1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate1, 1, 1, 1, 1);

        lblDate2 = new QLabel(widget_6);
        lblDate2->setObjectName(QString::fromUtf8("lblDate2"));
        lblDate2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate2, 1, 2, 1, 1);

        lblDate3 = new QLabel(widget_6);
        lblDate3->setObjectName(QString::fromUtf8("lblDate3"));
        lblDate3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate3, 1, 3, 1, 1);

        lblDate4 = new QLabel(widget_6);
        lblDate4->setObjectName(QString::fromUtf8("lblDate4"));
        lblDate4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate4, 1, 4, 1, 1);

        lblDate5 = new QLabel(widget_6);
        lblDate5->setObjectName(QString::fromUtf8("lblDate5"));
        lblDate5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblDate5, 1, 5, 1, 1);


        verticalLayout_5->addWidget(widget_6);

        widget_7 = new QWidget(widget_12);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_4 = new QGridLayout(widget_7);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(-1, 5, -1, 5);
        lblTypeIcon3 = new QLabel(widget_7);
        lblTypeIcon3->setObjectName(QString::fromUtf8("lblTypeIcon3"));
        lblTypeIcon3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon3, 0, 3, 1, 1);

        lblTypeIcon0 = new QLabel(widget_7);
        lblTypeIcon0->setObjectName(QString::fromUtf8("lblTypeIcon0"));
        lblTypeIcon0->setMinimumSize(QSize(0, 0));
        lblTypeIcon0->setMaximumSize(QSize(1000, 1000));
        lblTypeIcon0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0->setPixmap(QPixmap(QString::fromUtf8(":/res/type/Qing.png")));
        lblTypeIcon0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon0, 0, 0, 1, 1);

        lblTypeIcon2 = new QLabel(widget_7);
        lblTypeIcon2->setObjectName(QString::fromUtf8("lblTypeIcon2"));
        lblTypeIcon2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/type/DuoYun.png")));
        lblTypeIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon2, 0, 2, 1, 1);

        lblType0 = new QLabel(widget_7);
        lblType0->setObjectName(QString::fromUtf8("lblType0"));
        lblType0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType0, 1, 0, 1, 1);

        lblType3 = new QLabel(widget_7);
        lblType3->setObjectName(QString::fromUtf8("lblType3"));
        lblType3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType3, 1, 3, 1, 1);

        lblTypeIcon5 = new QLabel(widget_7);
        lblTypeIcon5->setObjectName(QString::fromUtf8("lblTypeIcon5"));
        lblTypeIcon5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/type/BaoYu.png")));
        lblTypeIcon5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon5, 0, 5, 1, 1);

        lblType5 = new QLabel(widget_7);
        lblType5->setObjectName(QString::fromUtf8("lblType5"));
        lblType5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType5, 1, 5, 1, 1);

        lblType4 = new QLabel(widget_7);
        lblType4->setObjectName(QString::fromUtf8("lblType4"));
        lblType4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType4, 1, 4, 1, 1);

        lblTypeIcon1 = new QLabel(widget_7);
        lblTypeIcon1->setObjectName(QString::fromUtf8("lblTypeIcon1"));
        lblTypeIcon1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/type/XiaoYu.png")));
        lblTypeIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon1, 0, 1, 1, 1);

        lblType2 = new QLabel(widget_7);
        lblType2->setObjectName(QString::fromUtf8("lblType2"));
        lblType2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType2, 1, 2, 1, 1);

        lblTypeIcon4 = new QLabel(widget_7);
        lblTypeIcon4->setObjectName(QString::fromUtf8("lblTypeIcon4"));
        lblTypeIcon4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/type/ZhongYu.png")));
        lblTypeIcon4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblTypeIcon4, 0, 4, 1, 1);

        lblType1 = new QLabel(widget_7);
        lblType1->setObjectName(QString::fromUtf8("lblType1"));
        lblType1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblType1, 1, 1, 1, 1);


        verticalLayout_5->addWidget(widget_7);

        widget_9 = new QWidget(widget_12);
        widget_9->setObjectName(QString::fromUtf8("widget_9"));
        horizontalLayout_11 = new QHBoxLayout(widget_9);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 5, -1, 5);
        lblQuality0 = new QLabel(widget_9);
        lblQuality0->setObjectName(QString::fromUtf8("lblQuality0"));
        lblQuality0->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;"));
        lblQuality0->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality0);

        lblQuality1 = new QLabel(widget_9);
        lblQuality1->setObjectName(QString::fromUtf8("lblQuality1"));
        lblQuality1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        lblQuality1->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality1);

        lblQuality2 = new QLabel(widget_9);
        lblQuality2->setObjectName(QString::fromUtf8("lblQuality2"));
        lblQuality2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        lblQuality2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality2);

        lblQuality3 = new QLabel(widget_9);
        lblQuality3->setObjectName(QString::fromUtf8("lblQuality3"));
        lblQuality3->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        lblQuality3->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality3);

        lblQuality4 = new QLabel(widget_9);
        lblQuality4->setObjectName(QString::fromUtf8("lblQuality4"));
        lblQuality4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lblQuality4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality4);

        lblQuality5 = new QLabel(widget_9);
        lblQuality5->setObjectName(QString::fromUtf8("lblQuality5"));
        lblQuality5->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        lblQuality5->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality5);


        verticalLayout_5->addWidget(widget_9);

        widget_8 = new QWidget(widget_12);
        widget_8->setObjectName(QString::fromUtf8("widget_8"));
        verticalLayout_14 = new QVBoxLayout(widget_8);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(-1, 5, -1, 5);
        lblHighCurve = new QLabel(widget_8);
        lblHighCurve->setObjectName(QString::fromUtf8("lblHighCurve"));
        lblHighCurve->setMinimumSize(QSize(0, 80));
        lblHighCurve->setMaximumSize(QSize(10000, 10000));
        lblHighCurve->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblHighCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lblHighCurve);

        lblLowCurve = new QLabel(widget_8);
        lblLowCurve->setObjectName(QString::fromUtf8("lblLowCurve"));
        lblLowCurve->setMinimumSize(QSize(0, 80));
        lblLowCurve->setMaximumSize(QSize(10000, 10000));
        lblLowCurve->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblLowCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_14->addWidget(lblLowCurve);


        verticalLayout_5->addWidget(widget_8);

        widget_13 = new QWidget(widget_12);
        widget_13->setObjectName(QString::fromUtf8("widget_13"));
        gridLayout_5 = new QGridLayout(widget_13);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setVerticalSpacing(0);
        lblFx0 = new QLabel(widget_13);
        lblFx0->setObjectName(QString::fromUtf8("lblFx0"));
        lblFx0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx0, 0, 0, 1, 1);

        lblFx1 = new QLabel(widget_13);
        lblFx1->setObjectName(QString::fromUtf8("lblFx1"));
        lblFx1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx1, 0, 1, 1, 1);

        lblFx2 = new QLabel(widget_13);
        lblFx2->setObjectName(QString::fromUtf8("lblFx2"));
        lblFx2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx2, 0, 2, 1, 1);

        lblFx3 = new QLabel(widget_13);
        lblFx3->setObjectName(QString::fromUtf8("lblFx3"));
        lblFx3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx3, 0, 3, 1, 1);

        lblFx4 = new QLabel(widget_13);
        lblFx4->setObjectName(QString::fromUtf8("lblFx4"));
        lblFx4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx4, 0, 4, 1, 1);

        lblFx5 = new QLabel(widget_13);
        lblFx5->setObjectName(QString::fromUtf8("lblFx5"));
        lblFx5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFx5, 0, 5, 1, 1);

        lblFl0 = new QLabel(widget_13);
        lblFl0->setObjectName(QString::fromUtf8("lblFl0"));
        lblFl0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl0, 1, 0, 1, 1);

        lblFl1 = new QLabel(widget_13);
        lblFl1->setObjectName(QString::fromUtf8("lblFl1"));
        lblFl1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl1, 1, 1, 1, 1);

        lblFl2 = new QLabel(widget_13);
        lblFl2->setObjectName(QString::fromUtf8("lblFl2"));
        lblFl2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl2, 1, 2, 1, 1);

        lblFl3 = new QLabel(widget_13);
        lblFl3->setObjectName(QString::fromUtf8("lblFl3"));
        lblFl3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl3, 1, 3, 1, 1);

        lblFl4 = new QLabel(widget_13);
        lblFl4->setObjectName(QString::fromUtf8("lblFl4"));
        lblFl4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl4, 1, 4, 1, 1);

        lblFl5 = new QLabel(widget_13);
        lblFl5->setObjectName(QString::fromUtf8("lblFl5"));
        lblFl5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(lblFl5, 1, 5, 1, 1);


        verticalLayout_5->addWidget(widget_13);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblTypeIcon->setText(QString());
        lblTemp->setText(QCoreApplication::translate("MainWindow", "32\302\260", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        lblLowHigh->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        leCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        btnSearch->setText(QString());
        lblDate->setText(QCoreApplication::translate("MainWindow", "2022/08/15 \346\230\237\346\234\237\345\233\233", nullptr));
        lblGanMao_2->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblWindIcon_2->setText(QString());
        lblWindFx_2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblWindFl_2->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblPm25Icon_2->setText(QString());
        lblPM25Title_2->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPM25_2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lblShiDuIcon_2->setText(QString());
        lblShiDuTitle_2->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        lblShiDu_2->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        lblQualityIcon_2->setText(QString());
        lblQualityTitle_2->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblQuality_2->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        lblDate0->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lblDate1->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        lblDate2->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        lblDate3->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        lblDate4->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        lblDate5->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        lblTypeIcon3->setText(QString());
        lblTypeIcon0->setText(QString());
        lblTypeIcon2->setText(QString());
        lblType0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon5->setText(QString());
        lblType5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblType4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblTypeIcon1->setText(QString());
        lblType2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon4->setText(QString());
        lblType1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblQuality0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQuality1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQuality2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQuality3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblQuality4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQuality5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblHighCurve->setText(QString());
        lblLowCurve->setText(QString());
        lblFx0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblFx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblFx2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx3->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lblFl0->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl1->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblFl2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl3->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
