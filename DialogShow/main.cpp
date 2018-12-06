#include "mainwindow.h"
#include <QApplication>
#include <dialog.h>

 int main(int argc, char *argv[])
 {
     QApplication app(argc, argv);
     MainWindow mainWindow;
     mainWindow.show();
     /*
     FindDialog dialog;
     dialog.show();*/
     return app.exec();
 }

