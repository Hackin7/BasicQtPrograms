#include "mainwindow.h"

#include <QCoreApplication>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent)
   : QMainWindow(parent)
{
   // Create the button, make "this" the parent
   button = new QPushButton("Show Dialog", this);
   // set size and location of the button
   //m_button->setGeometry(QRect(QPoint(100, 100),QSize(200, 50)));


   connect(button, SIGNAL (released()), this, SLOT (handleButton()));
}

void MainWindow::handleButton()
{
   //Dialog
   dialog = new FindDialog();
   dialog->show();
}
