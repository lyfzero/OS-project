#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::initMemoryTab() {
    /*cpuChart->legend()->hide();
    cpuChart->addSeries(cpuSeries);
    cpuChart->createDefaultAxes();
    cpuChart->axisX()->setRange(1, POINT_NUM);
    cpuChart->axisY()->setRange(0, 1);
    cpuChart->axisX()->hide();
    ui->cpuChartView->setChart(cpuChart);
    ui->cpuChartView->setRenderHint(QPainter::Antialiasing)*/;

}

void MainWindow::updateCpuChart() {
//    if (cpuHistory->size() == POINT_NUM) {
//        cpuHistory->pop_front();
//    }
//    cpuHistory->push_back(cpuUsed/100);
//    cpuSeries->clear();
//    int x = 1;
//    for (auto &y: *cpuHistory) {
//        cpuSeries->append(POINT_NUM - cpuHistory->size() + x, qreal(y));
//        ++x;
//    }
}

void MainWindow::updateMemBar() {
    ui->memBar->setValue((currentSysinfo.totalram - currentSysinfo.freeram)*100 / currentSysinfo.totalram);
    char buf[MAXLINE];
    sprintf(buf, "(MiB) %7.1f total, %7.1f free, %7.1f shared",
            double(currentSysinfo.totalram>>10)/1024,
            double(currentSysinfo.freeram>>10)/1024,
            double(currentSysinfo.sharedram>>10)/1024);
    ui->memDetailValue->setText(buf);
}

void MainWindow::updateSwpBar() {
    if (currentSysinfo.totalswap > 0) {
        ui->swpBar->setValue((currentSysinfo.totalswap - currentSysinfo.freeswap)*100 / currentSysinfo.totalswap);
    }
    char buf[MAXLINE];
    sprintf(buf, "(MiB) %7.1f total, %7.1f free",
            double(currentSysinfo.totalswap>>10)/1024,
            double(currentSysinfo.freeswap>>10)/1024);
    ui->swpDetailValue->setText(buf);
}


