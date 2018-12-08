#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "counter.h"

class QLCDNumber;
class QPushButton;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private slots:
    void start();
    void terminate();
    void hourScreenUpdate(int i);
    void minuteScreenUpdate(int i);
    void secondScreenUpdate(int i);

private:
    QLCDNumber *hourScreen;
    QLCDNumber *minuteScreen;
    QLCDNumber *secondScreen;
    QPushButton *startButton;
    QPushButton *stopButton;

    Counter *hours;
    Counter *minutes;
    Counter *seconds;
};

#endif // MAINWINDOW_H
