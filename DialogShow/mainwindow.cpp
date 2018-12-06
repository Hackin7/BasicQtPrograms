#include "mainwindow.h"

#include <QCoreApplication>
#include "dialog.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
   : QMainWindow(parent)
{
   // Create the button, make "this" the parent
   button = new QPushButton("Show Dialog", this);
   connect(button, SIGNAL (released()), this, SLOT (handleButton()));

   QGridLayout *mainLayout = new QGridLayout;
   mainLayout->addWidget(button);

   QWidget *widget = new QWidget();
   widget->setLayout(mainLayout);
   setCentralWidget(widget);
}

void MainWindow::handleButton()
{
   //Dialog
   dialog = new FindDialog();
   dialog->show();
}
