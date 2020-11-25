#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Breakfast_clicked()
{
    ui->label->setText("Breakfast!");
}

void MainWindow::on_pushButton_Lunch_clicked()
{
    ui->label->setText("Lunch!");
}

void MainWindow::on_pushButton_Dinner_clicked()
{
    ui->label->setText("Dinner!");
}
