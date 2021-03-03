#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
using std::string;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setPID(int pid);
    void setPPID(int ppid);
    void setProcessName(string name);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
