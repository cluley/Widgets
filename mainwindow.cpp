#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for(int i = 1; i <= 10; ++i)
    {
        ui->comB_dropList->addItem("Element " + QString::number(i));
    }

    ui->pB_button->setCheckable(true);

    ui->pBar_progression->setRange(0, 10);
    ui->pBar_progression->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pB_button_toggled(bool checked)
{
    if(checked)
    {
        if(ui->pBar_progression->value() == 10){
            ui->pBar_progression->setValue(0);
        }
        else{
            ui->pBar_progression->setValue(ui->pBar_progression->value() + 1);
        }
    }
}

