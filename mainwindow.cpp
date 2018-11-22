#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    SecDialog secdialog;
    //when setmodal==true: cannot access window1 after opened window2
    secdialog.setModal(true);
    //execute second dialogue
    //.exec: open the dialog
    secdialog.exec();
}
