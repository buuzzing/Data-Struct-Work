#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QString>
#include <QFrame>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);  // 设置初始页为主菜单
    ui->tabWidget_Breakfast->setCurrentIndex(0);    //  设置早餐初始页为“中式早餐”类
    init();
    initStyle();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Breakfast_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);  // 早餐页
    ui->pushButton_Back->setVisible(true);
    ui->pushButton_Back->setEnabled(true);
}
void MainWindow::on_pushButton_Lunch_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);  // 午餐页
    ui->pushButton_Back->setVisible(true);
    ui->pushButton_Back->setEnabled(true);
}
void MainWindow::on_pushButton_Dinner_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);  // 晚餐页
    ui->pushButton_Back->setVisible(true);
    ui->pushButton_Back->setEnabled(true);
}
void MainWindow::on_pushButton_Back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);  // 返回主菜单
    ui->pushButton_Back->setVisible(false);
    ui->pushButton_Back->setEnabled(false);
}

void MainWindow::initStyle()
{

    setStyleSheet(
"QCheckBox{"
    "font: 80 13pt \"Microsoft YaHei\";"
    "color: rgb(170, 0, 255);"
"}"

"QTabWidget{"
    "font: 11pt \"Microsoft YaHei\";"
"}"
	
"QTabWidget::pane {"
	"border-top: 2px solid #C2C7CB;"
	"position: absolute;"
	"top: -0.5em;"
"}"

"QTabWidget::tab-bar {"
	"alignment: center;"
"}"

"QTabBar::tab {"
	"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
								"stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,"
								"stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);"
	"border: 2px solid #C4C4C3;"
	"border-bottom-color: #C2C7CB;"
	"border-top-left-radius: 4px;"
	"border-top-right-radius: 4px;"
	"min-width: 8ex;"
	"padding: 2px;"
	"}"

"QTabBar::tab:selected, QTabBar::tab:hover {"
	"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
	"stop: 0 #fafafa, stop: 0.4 #f4f4f4,"
	"stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);"
	"}"

"QTabBar::tab:selected {"
	"border-color: #9B9B9B;"
	"border-bottom-color: #C2C7CB;"
"}"

"QCheckBox {"
    "spacing: 5px;"
"}"

"QCheckBox::indicator {"
    "width: 13px;"
    "height: 13px;"
"}"
    );
    ui->groupBox_Menu->setStyleSheet("#groupBox_Menu{ color: rgb(170, 85, 255); font: 75 15pt \"Microsoft YaHei\";}");
    ui->groupBox_Breakfast->setStyleSheet("#groupBox_Breakfast{ color: rgb(102,204,255); font:75 15pt \"Microsoft YaHei\";}");
    ui->BT1_P1->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/馒头.png)"));
    ui->BT1_P2->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/鸡蛋.png)"));
    ui->BT1_P3->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/肉包子.png)"));
    ui->BT1_P4->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/手抓饼.png)"));
    ui->BT1_P5->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/年糕.png)"));
    ui->BT1_P6->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/番茄鸡蛋饼.png)"));
    ui->BT1_P7->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/小笼包.png)"));
    ui->BT2_P1->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/皮蛋瘦肉粥.png)"));
    ui->BT2_P2->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/豆浆.png)"));
    ui->BT2_P3->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/牛奶.png)"));
    ui->BT2_P4->setStyleSheet(QString::fromLocal8Bit("image:url(:/Resources/Breakfast/酸奶紫薯泥.png)"));
}

void MainWindow::init()
{
    // 在主菜单时无需显示主菜单按钮
    ui->pushButton_Back->setVisible(false); ui->pushButton_Back->setEnabled(false);

    ui->scrollArea_BT1->setFrameShape(QFrame::NoFrame);
    ui->BT1_N1->setVisible(false); ui->BT1_N1->setEnabled(false);
    ui->BT1_N2->setVisible(false); ui->BT1_N2->setEnabled(false);
    ui->BT1_N3->setVisible(false); ui->BT1_N3->setEnabled(false);
    ui->BT1_N4->setVisible(false); ui->BT1_N4->setEnabled(false);
    ui->BT1_N5->setVisible(false); ui->BT1_N5->setEnabled(false);
    ui->BT1_N6->setVisible(false); ui->BT1_N6->setEnabled(false);
    ui->BT1_N7->setVisible(false); ui->BT1_N7->setEnabled(false);

    ui->scrollArea_BT2->setFrameShape(QFrame::NoFrame);
    ui->BT2_N1->setVisible(false); ui->BT2_N1->setEnabled(false);
    ui->BT2_N2->setVisible(false); ui->BT2_N2->setEnabled(false);
    ui->BT2_N3->setVisible(false); ui->BT2_N3->setEnabled(false);
    ui->BT2_N4->setVisible(false); ui->BT2_N4->setEnabled(false);
}

void MainWindow::on_BT1_F1_clicked(bool checked)
{
    if(checked){
        ui->BT1_N1->setVisible(true);
        ui->BT1_N1->setEnabled(true);
    }else{
        ui->BT1_N1->setVisible(false);
        ui->BT1_N1->setEnabled(false);
    }
}
void MainWindow::on_BT1_F2_clicked(bool checked)
{
    if(checked){
        ui->BT1_N2->setVisible(true);
        ui->BT1_N2->setEnabled(true);
    }else{
        ui->BT1_N2->setVisible(false);
        ui->BT1_N2->setEnabled(false);
    }
}
void MainWindow::on_BT1_F3_clicked(bool checked)
{
    if(checked){
        ui->BT1_N3->setVisible(true);
        ui->BT1_N3->setEnabled(true);
    }else{
        ui->BT1_N3->setVisible(false);
        ui->BT1_N3->setEnabled(false);
    }
}
void MainWindow::on_BT1_F4_clicked(bool checked)
{
    if(checked){
        ui->BT1_N4->setVisible(true);
        ui->BT1_N4->setEnabled(true);
    }else{
        ui->BT1_N4->setVisible(false);
        ui->BT1_N4->setEnabled(false);
    }
}
void MainWindow::on_BT1_F5_clicked(bool checked)
{
    if(checked){
        ui->BT1_N5->setVisible(true);
        ui->BT1_N5->setEnabled(true);
    }else{
        ui->BT1_N5->setVisible(false);
        ui->BT1_N5->setEnabled(false);
    }
}
void MainWindow::on_BT1_F6_clicked(bool checked)
{
    if(checked){
        ui->BT1_N6->setVisible(true);
        ui->BT1_N6->setEnabled(true);
    }else{
        ui->BT1_N6->setVisible(false);
        ui->BT1_N6->setEnabled(false);
    }
}
void MainWindow::on_BT1_F7_clicked(bool checked)
{
    if(checked){
        ui->BT1_N7->setVisible(true);
        ui->BT1_N7->setEnabled(true);
    }else{
        ui->BT1_N7->setVisible(false);
        ui->BT1_N7->setEnabled(false);
    }
}
void MainWindow::on_BT2_F1_clicked(bool checked)
{
    if(checked){
        ui->BT2_N1->setVisible(true);
        ui->BT2_N1->setEnabled(true);
    }else{
        ui->BT2_N1->setVisible(false);
        ui->BT2_N1->setEnabled(false);
    }
}
void MainWindow::on_BT2_F2_clicked(bool checked)
{
    if(checked){
        ui->BT2_N2->setVisible(true);
        ui->BT2_N2->setEnabled(true);
    }else{
        ui->BT2_N2->setVisible(false);
        ui->BT2_N2->setEnabled(false);
    }
}
void MainWindow::on_BT2_F3_clicked(bool checked)
{
    if(checked){
        ui->BT2_N3->setVisible(true);
        ui->BT2_N3->setEnabled(true);
    }else{
        ui->BT2_N3->setVisible(false);
        ui->BT2_N3->setEnabled(false);
    }
}
void MainWindow::on_BT2_F4_clicked(bool checked)
{
    if(checked){
        ui->BT2_N4->setVisible(true);
        ui->BT2_N4->setEnabled(true);
    }else{
        ui->BT2_N4->setVisible(false);
        ui->BT2_N4->setEnabled(false);
    }
}
