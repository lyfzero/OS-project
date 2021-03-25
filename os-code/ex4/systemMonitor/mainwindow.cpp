#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    cpuHistory(new deque<float>)
{
    ui->setupUi(this);
    this->setWindowTitle("LYF's monitor");

    initMemoryTab();
    initProcessTab();
    initSystemTab();
    initHelpTab();

    update();
}




MainWindow::~MainWindow()
{
    delete ui;
    delete cpuHistory;
}

void MainWindow::update() {
    updateSysinfo();

    updateCpuChart();
    updateMemBar();
    updateSwpBar();

    updateTaskLabel();
//    updateTaskTable();
    updateTasksTable();

    updateCurrentDatetimeLabel();
}
