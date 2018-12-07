#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QListWidget;
class QListWidgetItem;
class QPushButton;
#include <QDir>
class QDir;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //~MainWindow();

private slots:
    void openDir(QListWidgetItem *item);
    void drives();
private:
    QListWidget *list;
    QDir dir;
    QPushButton *button;
   //Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
