#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define MAXSIZE 2048

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


private:
//    void start();
//    void help();
//    int regist(char username[30], char password[30]);
//    int login(char username[30], char password[30]);
//    int operate(char name[30], char pass[30]);
};

#endif // MAINWINDOW_H
