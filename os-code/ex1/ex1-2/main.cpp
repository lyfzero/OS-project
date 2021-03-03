#include "mainwindow.h"
#include <QApplication>
#include<unistd.h>
#include<stdio.h>
#include<errno.h>
#include<string>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
using std::string;
pid_t pid_1, pid_2;

int main(int argc, char *argv[])
{
    string processName;
    pid_1 = fork();
    if(pid_1 < 0) {
        fprintf(stderr, "fork child1 failed\n");
        return -1;
    } else if(pid_1 == 0) {
        QApplication a(argc, argv);
        MainWindow w;
        w.setPID(getpid());
        w.setPPID(getppid());
        processName = "child1";
        w.setProcessName(processName);
        w.show();
        return a.exec();
    } else {
        pid_2 = fork();
        if(pid_2 < 0) {
            fprintf(stderr, "fork child2 failed\n");
            return -1;
        } else if(pid_2 == 0) {
            QApplication a(argc, argv);
            MainWindow w;
            w.setPID(getpid());
            w.setPPID(getppid());
            processName = "child2";
            w.setProcessName(processName);
            w.show();
            return a.exec();
        }
    }
    QApplication a(argc, argv);
    MainWindow w;
    w.setPID(getpid());
    w.setPPID(getppid());
    processName = "parent";
    w.setProcessName(processName);
    w.show();
    return a.exec();
}
