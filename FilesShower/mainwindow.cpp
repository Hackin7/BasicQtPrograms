#include "mainwindow.h"
#include <QtWidgets>
#include <QDir>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    list = new QListWidget(this);
    drives();
    connect(list, SIGNAL(itemDoubleClicked(QListWidgetItem *)), SLOT(openDir    (QListWidgetItem *)));

    button = new QPushButton("Drives", this);
    connect(button, SIGNAL (released()), this, SLOT (drives()));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(list);
    mainLayout->addWidget(button);

    QWidget *widget = new QWidget();
    widget->setLayout(mainLayout);
    setCentralWidget(widget);
}

void MainWindow::drives()
{
    list->clear();
    QDir dir;
    foreach(QFileInfo item, dir.drives() )//for(int i = 0; i < 10; i++)
    {
        qDebug() << item.absoluteFilePath();
        list->addItem(new QListWidgetItem(item.absoluteFilePath()));
    }
}

void MainWindow::openDir(QListWidgetItem *item)
{
   qDebug() << item->text();
   QDir dir = QDir(item->text());
   list->clear();
   foreach(QFileInfo entry, dir.entryInfoList() )//for(int i = 0; i < 10; i++)
   {
       qDebug() << entry.absoluteFilePath();
       list->addItem(new QListWidgetItem(entry.absoluteFilePath()));
   }
}

