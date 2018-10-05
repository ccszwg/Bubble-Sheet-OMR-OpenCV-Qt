#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QObject>

#include <stdio.h>
#include <iostream>
#include <string>

#include <pdf.h>

#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QThread>

#include <Magick++.h>

#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace Magick;
using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Bubble Sheet Optical Mark Recognition");

    //ui->label_displayImg->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, int(img.step), QImage::Format_RGB888)));
    //ui->label_displayImg->setScaledContents( true );
    ui->progressBar_Pdf2Img->setMaximum(100);
    ui->progressBar_Pdf2Img->setMinimum(0);
    ui->progressBar_Pdf2Img->setValue(0);

    ui->textBrowser->setText("...");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void singleImgAlgorithm(std::string)
{
    // //
}

void MainWindow::on_pushButton_Choose_PDF_clicked()
{
    QString path2Pdf = QFileDialog::getOpenFileName(
                this,
                tr("Choose PDF"),
                "C:/",
                tr("PDF Files (*.pdf)")
                );
    if (path2Pdf.isEmpty()){
        QMessageBox::warning(this, tr("What are you doing?"), tr("Please select a PDF file."));
    }
    else
    {
        pdf::mFullPath = path2Pdf.toStdString();
        ui->textBrowser->setText(("[ PDF Read ] "+pdf::mFullPath).c_str());
    }
}

void MainWindow::onProgressUpdated(double perc)
{
    ui->progressBar_Pdf2Img->setValue(int(perc));
}
void MainWindow::onNewlyConverted(std::string convertedImgName)
{
    convertedImgName = "[ PDF -> Image ] "+convertedImgName;
    QString str = QString::fromUtf8(convertedImgName.c_str());
    ui->textBrowser->append(str);
}
void MainWindow::onStartedConverting()
{
    QString str = QString::fromUtf8("[ PDF -> Image Conversion Started ] ");
    ui->textBrowser->append(str);
}
void MainWindow::onBadImgFormat()
{
    QMessageBox::warning(this, tr("What the heck?"),  tr("Bad Target Image Format!"));
}
void MainWindow::onFinishedConverting(qint64 timeTook)
{
    QString str = QString("[ PDF -> Image Conversion Finished After " + QString::number(timeTook/1000) + " Seconds ] ");
    ui->textBrowser->append(str);
}
void MainWindow::onObjDestroyed()
{
    QMessageBox::information(this, tr("DESTRUCTION"), tr("An pdfFile object has been destroyed!"));
}
void MainWindow::on_pushButton_ConvertPdf2Png_clicked()
{
    if (pdf::mFullPath.size()<1)
    {
        QMessageBox::warning(this, tr("What are you doing?"), tr("Please have a PDF file loaded first."));
    }
    else if (ui->lineEdit_SetImgPrefix->text().length()<1)
    {
        QMessageBox::warning(this, tr("What are you doing?"), tr("Please set a desirable prefix for image names."));
    }
    else
    {
        vector<string> ret;

        QThread* thread = new QThread;
        pdf* pdfFile = new pdf(pdf::mFullPath);

        pdfFile->setArgs("D:/Users/Lemuel/Software-Development/Bubble-Sheet-OMR/Bubble-Sheet-OMR-OpenCV-Qt/pdf",
                         ui->lineEdit_SetImgPrefix->text().toStdString(),
                         ui->comboBox_SelectOutImgFormat->currentText().toStdString());


        pdfFile->moveToThread(thread);

        connect(pdfFile, SIGNAL (badImgFormat()), this, SLOT(onBadImgFormat()));
        connect(pdfFile, SIGNAL (startedConverting()), this, SLOT(onStartedConverting()));
        connect(pdfFile, SIGNAL (progressUpdated(double)), this, SLOT(onProgressUpdated(double)));
        connect(pdfFile, SIGNAL (newlyConverted(std::string)), this, SLOT (onNewlyConverted(std::string)));

        connect(thread, SIGNAL (started()), pdfFile, SLOT (ConvertToImgs()));

        connect(pdfFile, SIGNAL (finishedConverting(qint64)), this, SLOT (onFinishedConverting(qint64)));

        connect(pdfFile, SIGNAL (finishedConverting(qint64)), thread, SLOT (quit()));

        connect(pdfFile, SIGNAL (finishedConverting(qint64)), pdfFile, SLOT (deleteLater()));
        connect(thread, SIGNAL (finished()), thread, SLOT (deleteLater()));

        //connect(thread, SIGNAL (destroyed()), this, SLOT (onObjDestroyed()));

        thread->start();
    }
}
