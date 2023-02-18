#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDialog>

class QLabel;

class MainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

private:
    QLabel *label;
private slots:
    void setValue(int r);
    //Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
