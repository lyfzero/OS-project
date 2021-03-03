#include "mainwindow.h"
#include "ui_mainwindow.h"

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
void MainWindow::setPID(int pid)
{
    this->ui->pidValue->setText(QString::number(pid));
}
void MainWindow::setPPID(int ppid)
{
    this->ui->PPIDValue->setText(QString::number(ppid));
}
void MainWindow::setProcessName(string name)
{
    this->ui->processName->setText(QString::fromStdString(name));
}
