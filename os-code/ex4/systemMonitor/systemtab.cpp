#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

void MainWindow::initSystemTab() {
    updateCpuInfoGroup();
    updateOsInfoGroup();
    updateHostnameGroup();
    updateLastLoginDatetimeLabel();
}

void MainWindow::updateCpuInfoGroup() {
    string buff, info;
    ostringstream out;
    ifstream infile("/proc/cpuinfo");
    getline(infile, buff);  // processor
    getline(infile, buff);  // vendor_id
    getline(infile, buff);  // cpu family
    getline(infile, buff);  // model
    getline(infile, buff, ':');  // model name
    infile.get();
    getline(infile, info);
    ui->cpuNameValue->setText(info.c_str());
    getline(infile, buff);  // stepping
    getline(infile, buff);  // microcode
    getline(infile, buff);  // cpu MHz
    getline(infile, buff, ':');  // cache size
    infile.get();
    getline(infile, info);
    ui->cacheValue->setText(info.c_str());
}

void MainWindow::updateOsInfoGroup() {
    string osrelease, ostype;
    ifstream infile;
    infile.open("/proc/sys/kernel/osrelease");
    getline(infile, osrelease);
    infile.close();
    infile.open("/proc/sys/kernel/ostype");
    getline(infile, ostype);
    infile.close();
    ui->osReleaseValue->setText(osrelease.c_str());
    ui->osTypeValue->setText(ostype.c_str());
}

void MainWindow::updateHostnameGroup() {
    string hostname;
    ifstream infile("/proc/sys/kernel/hostname");
    getline(infile, hostname);
    ui->hostnameValue->setText(hostname.c_str());
//    ui->userLabel->setText(getpwuid(getuid())->pw_name);
//    ui->groupLabel->setText(getgrgid(getgid())->gr_name);
}

void MainWindow::updateLastLoginDatetimeLabel() {
    struct utmp _utmp;
    int fd = open("/var/run/utmp", O_RDONLY);
    read(fd, &_utmp, sizeof(_utmp));
    ::close(fd);
    time_t loginDatetime = _utmp.ut_tv.tv_sec;
    char *formatLoginDateTime = ctime(&loginDatetime);
    formatLoginDateTime[strlen(formatLoginDateTime)-1] = 0;
    ui->lastLoginDatatimeValue->setText(formatLoginDateTime);
}

void MainWindow::updateCurrentDatetimeLabel() {
    time_t currentDatetime = time(nullptr);
    char *formatDatetime = ctime(&currentDatetime);
    formatDatetime[strlen(formatDatetime)-1] = 0;
    ui->CurrentDatatimeValue->setText(formatDatetime);
}

