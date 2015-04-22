#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
//очередь и обработка событий
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    //cout<<"Any do"<<endl;
    ui->log->addItem("Any do");
}

void MainWindow::on_pushButton_3_clicked()
{  cout <<"connectui(ui->pushButton_2, SIGNAL(clicked(),this, SLOT(close()))"<<endl;
    connect(ui->pushButton_2, SIGNAL(clicked()),this, SLOT(close()));
}
