/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "frame_displayer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    frame_displayer *label_FrameDisplayer;
    QPushButton *pushButton_PreviousSheet;
    QPushButton *pushButton_NextSheet;
    QLabel *label_PageNumber;
    QLabel *label_xCoord;
    QLabel *label_yCoord;
    QLabel *label_xCoordHolder;
    QLabel *label_yCoordHolder;
    QTabWidget *tabWidget;
    QWidget *tab_pdfConversion;
    QPushButton *pushButton_ImportPDF;
    QProgressBar *progressBar_ConversionDone;
    QWidget *tab_BubbleMarking;
    QGroupBox *groupBox_MarkingBubblesSettings;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_MarkingBubbles;
    QCheckBox *checkBox_ifUniformBubblesShapes;
    QSpinBox *spinBox_Marking_startPage;
    QSpinBox *spinBox_Marking_endPage;
    QPushButton *pushButton_Marking_Generic;
    QWidget *tab_BubbleGrouping;
    QFrame *line_3;
    QGroupBox *groupBox_GroupingBubblesSettings;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_GroupingBubbles;
    QCheckBox *checkBox_GB_1;
    QCheckBox *checkBox_GB_2;
    QCheckBox *checkBox_GB_3;
    QCheckBox *checkBox_GB_4;
    QCheckBox *checkBox_GB_5;
    QPushButton *pushButton_GroupBubbles;
    QComboBox *comboBox_GroupingMethod;
    QSpinBox *spinBox_Grouping_startPage;
    QSpinBox *spinBox_Grouping_endPage;
    QGroupBox *groupBox_Info;
    QGroupBox *groupBox_Info_Overall;
    QGroupBox *groupBox_Info_CurrentPage;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 800);
        MainWindow->setMinimumSize(QSize(800, 800));
        MainWindow->setMaximumSize(QSize(800, 800));
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_FrameDisplayer = new frame_displayer(centralWidget);
        label_FrameDisplayer->setObjectName(QStringLiteral("label_FrameDisplayer"));
        label_FrameDisplayer->setGeometry(QRect(10, 10, 500, 707));
        label_FrameDisplayer->setAutoFillBackground(false);
        label_FrameDisplayer->setFrameShape(QFrame::WinPanel);
        label_FrameDisplayer->setFrameShadow(QFrame::Raised);
        label_FrameDisplayer->setTextFormat(Qt::PlainText);
        label_FrameDisplayer->setScaledContents(true);
        pushButton_PreviousSheet = new QPushButton(centralWidget);
        pushButton_PreviousSheet->setObjectName(QStringLiteral("pushButton_PreviousSheet"));
        pushButton_PreviousSheet->setGeometry(QRect(570, 670, 71, 41));
        pushButton_NextSheet = new QPushButton(centralWidget);
        pushButton_NextSheet->setObjectName(QStringLiteral("pushButton_NextSheet"));
        pushButton_NextSheet->setGeometry(QRect(650, 670, 71, 41));
        label_PageNumber = new QLabel(centralWidget);
        label_PageNumber->setObjectName(QStringLiteral("label_PageNumber"));
        label_PageNumber->setGeometry(QRect(520, 670, 41, 41));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_PageNumber->setFont(font);
        label_PageNumber->setAlignment(Qt::AlignCenter);
        label_xCoord = new QLabel(centralWidget);
        label_xCoord->setObjectName(QStringLiteral("label_xCoord"));
        label_xCoord->setGeometry(QRect(400, 720, 16, 16));
        label_yCoord = new QLabel(centralWidget);
        label_yCoord->setObjectName(QStringLiteral("label_yCoord"));
        label_yCoord->setGeometry(QRect(460, 720, 16, 16));
        label_xCoordHolder = new QLabel(centralWidget);
        label_xCoordHolder->setObjectName(QStringLiteral("label_xCoordHolder"));
        label_xCoordHolder->setGeometry(QRect(410, 720, 41, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_xCoordHolder->setFont(font1);
        label_xCoordHolder->setAlignment(Qt::AlignCenter);
        label_yCoordHolder = new QLabel(centralWidget);
        label_yCoordHolder->setObjectName(QStringLiteral("label_yCoordHolder"));
        label_yCoordHolder->setGeometry(QRect(470, 720, 41, 16));
        label_yCoordHolder->setFont(font1);
        label_yCoordHolder->setAlignment(Qt::AlignCenter);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(520, 10, 271, 651));
        QFont font2;
        font2.setPointSize(8);
        tabWidget->setFont(font2);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_pdfConversion = new QWidget();
        tab_pdfConversion->setObjectName(QStringLiteral("tab_pdfConversion"));
        pushButton_ImportPDF = new QPushButton(tab_pdfConversion);
        pushButton_ImportPDF->setObjectName(QStringLiteral("pushButton_ImportPDF"));
        pushButton_ImportPDF->setGeometry(QRect(10, 10, 91, 51));
        progressBar_ConversionDone = new QProgressBar(tab_pdfConversion);
        progressBar_ConversionDone->setObjectName(QStringLiteral("progressBar_ConversionDone"));
        progressBar_ConversionDone->setGeometry(QRect(10, 70, 251, 21));
        progressBar_ConversionDone->setValue(0);
        tabWidget->addTab(tab_pdfConversion, QString());
        tab_BubbleMarking = new QWidget();
        tab_BubbleMarking->setObjectName(QStringLiteral("tab_BubbleMarking"));
        groupBox_MarkingBubblesSettings = new QGroupBox(tab_BubbleMarking);
        groupBox_MarkingBubblesSettings->setObjectName(QStringLiteral("groupBox_MarkingBubblesSettings"));
        groupBox_MarkingBubblesSettings->setGeometry(QRect(10, 100, 251, 81));
        verticalLayoutWidget_2 = new QWidget(groupBox_MarkingBubblesSettings);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 231, 51));
        verticalLayout_MarkingBubbles = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_MarkingBubbles->setSpacing(6);
        verticalLayout_MarkingBubbles->setContentsMargins(11, 11, 11, 11);
        verticalLayout_MarkingBubbles->setObjectName(QStringLiteral("verticalLayout_MarkingBubbles"));
        verticalLayout_MarkingBubbles->setContentsMargins(0, 0, 0, 0);
        checkBox_ifUniformBubblesShapes = new QCheckBox(verticalLayoutWidget_2);
        checkBox_ifUniformBubblesShapes->setObjectName(QStringLiteral("checkBox_ifUniformBubblesShapes"));
        checkBox_ifUniformBubblesShapes->setChecked(true);

        verticalLayout_MarkingBubbles->addWidget(checkBox_ifUniformBubblesShapes);

        spinBox_Marking_startPage = new QSpinBox(tab_BubbleMarking);
        spinBox_Marking_startPage->setObjectName(QStringLiteral("spinBox_Marking_startPage"));
        spinBox_Marking_startPage->setGeometry(QRect(10, 70, 42, 22));
        spinBox_Marking_startPage->setMinimum(1);
        spinBox_Marking_endPage = new QSpinBox(tab_BubbleMarking);
        spinBox_Marking_endPage->setObjectName(QStringLiteral("spinBox_Marking_endPage"));
        spinBox_Marking_endPage->setGeometry(QRect(60, 70, 42, 22));
        spinBox_Marking_endPage->setMinimum(0);
        spinBox_Marking_endPage->setMaximum(0);
        spinBox_Marking_endPage->setValue(0);
        pushButton_Marking_Generic = new QPushButton(tab_BubbleMarking);
        pushButton_Marking_Generic->setObjectName(QStringLiteral("pushButton_Marking_Generic"));
        pushButton_Marking_Generic->setGeometry(QRect(10, 10, 91, 51));
        tabWidget->addTab(tab_BubbleMarking, QString());
        tab_BubbleGrouping = new QWidget();
        tab_BubbleGrouping->setObjectName(QStringLiteral("tab_BubbleGrouping"));
        line_3 = new QFrame(tab_BubbleGrouping);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, -20, 271, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        groupBox_GroupingBubblesSettings = new QGroupBox(tab_BubbleGrouping);
        groupBox_GroupingBubblesSettings->setObjectName(QStringLiteral("groupBox_GroupingBubblesSettings"));
        groupBox_GroupingBubblesSettings->setGeometry(QRect(10, 100, 251, 181));
        verticalLayoutWidget = new QWidget(groupBox_GroupingBubblesSettings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 231, 151));
        verticalLayout_GroupingBubbles = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_GroupingBubbles->setSpacing(6);
        verticalLayout_GroupingBubbles->setContentsMargins(11, 11, 11, 11);
        verticalLayout_GroupingBubbles->setObjectName(QStringLiteral("verticalLayout_GroupingBubbles"));
        verticalLayout_GroupingBubbles->setContentsMargins(0, 0, 0, 0);
        checkBox_GB_1 = new QCheckBox(verticalLayoutWidget);
        checkBox_GB_1->setObjectName(QStringLiteral("checkBox_GB_1"));
        QFont font3;
        font3.setPointSize(9);
        checkBox_GB_1->setFont(font3);

        verticalLayout_GroupingBubbles->addWidget(checkBox_GB_1);

        checkBox_GB_2 = new QCheckBox(verticalLayoutWidget);
        checkBox_GB_2->setObjectName(QStringLiteral("checkBox_GB_2"));
        checkBox_GB_2->setFont(font3);

        verticalLayout_GroupingBubbles->addWidget(checkBox_GB_2);

        checkBox_GB_3 = new QCheckBox(verticalLayoutWidget);
        checkBox_GB_3->setObjectName(QStringLiteral("checkBox_GB_3"));
        checkBox_GB_3->setFont(font3);

        verticalLayout_GroupingBubbles->addWidget(checkBox_GB_3);

        checkBox_GB_4 = new QCheckBox(verticalLayoutWidget);
        checkBox_GB_4->setObjectName(QStringLiteral("checkBox_GB_4"));
        checkBox_GB_4->setFont(font3);

        verticalLayout_GroupingBubbles->addWidget(checkBox_GB_4);

        checkBox_GB_5 = new QCheckBox(verticalLayoutWidget);
        checkBox_GB_5->setObjectName(QStringLiteral("checkBox_GB_5"));
        checkBox_GB_5->setFont(font3);

        verticalLayout_GroupingBubbles->addWidget(checkBox_GB_5);

        pushButton_GroupBubbles = new QPushButton(tab_BubbleGrouping);
        pushButton_GroupBubbles->setObjectName(QStringLiteral("pushButton_GroupBubbles"));
        pushButton_GroupBubbles->setGeometry(QRect(10, 10, 91, 51));
        comboBox_GroupingMethod = new QComboBox(tab_BubbleGrouping);
        comboBox_GroupingMethod->addItem(QString());
        comboBox_GroupingMethod->addItem(QString());
        comboBox_GroupingMethod->setObjectName(QStringLiteral("comboBox_GroupingMethod"));
        comboBox_GroupingMethod->setGeometry(QRect(110, 10, 141, 21));
        spinBox_Grouping_startPage = new QSpinBox(tab_BubbleGrouping);
        spinBox_Grouping_startPage->setObjectName(QStringLiteral("spinBox_Grouping_startPage"));
        spinBox_Grouping_startPage->setGeometry(QRect(10, 70, 42, 22));
        spinBox_Grouping_startPage->setMinimum(1);
        spinBox_Grouping_endPage = new QSpinBox(tab_BubbleGrouping);
        spinBox_Grouping_endPage->setObjectName(QStringLiteral("spinBox_Grouping_endPage"));
        spinBox_Grouping_endPage->setGeometry(QRect(60, 70, 42, 22));
        groupBox_Info = new QGroupBox(tab_BubbleGrouping);
        groupBox_Info->setObjectName(QStringLiteral("groupBox_Info"));
        groupBox_Info->setGeometry(QRect(10, 290, 251, 331));
        groupBox_Info_Overall = new QGroupBox(groupBox_Info);
        groupBox_Info_Overall->setObjectName(QStringLiteral("groupBox_Info_Overall"));
        groupBox_Info_Overall->setGeometry(QRect(10, 20, 231, 81));
        groupBox_Info_CurrentPage = new QGroupBox(groupBox_Info);
        groupBox_Info_CurrentPage->setObjectName(QStringLiteral("groupBox_Info_CurrentPage"));
        groupBox_Info_CurrentPage->setGeometry(QRect(10, 110, 231, 211));
        tabWidget->addTab(tab_BubbleGrouping, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_FrameDisplayer->setText(QString());
        pushButton_PreviousSheet->setText(QApplication::translate("MainWindow", "Previous", nullptr));
        pushButton_NextSheet->setText(QApplication::translate("MainWindow", "Next", nullptr));
        label_PageNumber->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_xCoord->setText(QApplication::translate("MainWindow", "x: ", nullptr));
        label_yCoord->setText(QApplication::translate("MainWindow", "y: ", nullptr));
        label_xCoordHolder->setText(QString());
        label_yCoordHolder->setText(QString());
        pushButton_ImportPDF->setText(QApplication::translate("MainWindow", "Import PDF", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_pdfConversion), QApplication::translate("MainWindow", "PDF", nullptr));
        groupBox_MarkingBubblesSettings->setTitle(QApplication::translate("MainWindow", "Settings:", nullptr));
        checkBox_ifUniformBubblesShapes->setText(QApplication::translate("MainWindow", "Uniform bubbles shapes.", nullptr));
        pushButton_Marking_Generic->setText(QApplication::translate("MainWindow", "Mark Bubbles", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_BubbleMarking), QApplication::translate("MainWindow", "Marking", nullptr));
        groupBox_GroupingBubblesSettings->setTitle(QApplication::translate("MainWindow", "Settings:", nullptr));
        checkBox_GB_1->setText(QApplication::translate("MainWindow", "Uniform no. of bubbles per question.", nullptr));
        checkBox_GB_2->setText(QApplication::translate("MainWindow", "Uniform questions layout.", nullptr));
        checkBox_GB_3->setText(QApplication::translate("MainWindow", "Uniform bubbles layout.", nullptr));
        checkBox_GB_4->setText(QApplication::translate("MainWindow", "Distance of B2B < Q2Q.", nullptr));
        checkBox_GB_5->setText(QApplication::translate("MainWindow", "Uniform layout across ALL pages.", nullptr));
        pushButton_GroupBubbles->setText(QApplication::translate("MainWindow", "Group Bubbles", nullptr));
        comboBox_GroupingMethod->setItemText(0, QApplication::translate("MainWindow", "Generic Grouping", nullptr));
        comboBox_GroupingMethod->setItemText(1, QApplication::translate("MainWindow", "K-Mean Clustering", nullptr));

        groupBox_Info->setTitle(QApplication::translate("MainWindow", "Info:", nullptr));
        groupBox_Info_Overall->setTitle(QApplication::translate("MainWindow", "Overall:", nullptr));
        groupBox_Info_CurrentPage->setTitle(QApplication::translate("MainWindow", "Current Page:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_BubbleGrouping), QApplication::translate("MainWindow", "Grouping", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
