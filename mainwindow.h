#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "foodMenu.h"
#include <QMainWindow>
#include <QButtonGroup>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Breakfast_clicked();
    void on_pushButton_Lunch_clicked();
    void on_pushButton_Dinner_clicked();
    void on_pushButton_Back_clicked();

    void on_BT1_F1_clicked(bool checked);
    void on_BT1_F2_clicked(bool checked);
    void on_BT1_F3_clicked(bool checked);
    void on_BT1_F4_clicked(bool checked);
    void on_BT1_F5_clicked(bool checked);
    void on_BT1_F6_clicked(bool checked);
    void on_BT1_F7_clicked(bool checked);

    void on_BT2_F1_clicked(bool checked);

    void on_BT2_F2_clicked(bool checked);

    void on_BT2_F3_clicked(bool checked);

    void on_BT2_F4_clicked(bool checked);

protected:

private:
    Ui::MainWindow* ui;
    void initStyle();
    void init();
};
#endif // MAINWINDOW_H
