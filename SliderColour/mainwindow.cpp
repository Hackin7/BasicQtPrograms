#include "mainwindow.h"
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent) :
   QDialog(parent)
{

    label = new QLabel(tr("Blue to Pink Value: 0"));

    QSlider *slider;
    slider = new QSlider(Qt::Horizontal);//orientation);
    slider->setFocusPolicy(Qt::StrongFocus);
    slider->setRange(0, 255);
    //slider->setTickPosition(QSlider::TicksBothSides);
    //slider->setTickInterval(255);
    //slider->setSingleStep(1);
    connect(slider, SIGNAL(valueChanged(int)),this, SLOT(setValue(int)));

    //setStyleSheet("background-color: rgb(0, 0, 0)");

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(label);
    mainLayout->addWidget(slider);
    setLayout(mainLayout);
}

void MainWindow::setValue(int r){
    QString labelText = QString("Blue to Pink Value: %1").arg(r);
    label->setText(labelText);
    QString style = QString("background-color: rgb(%1, 127, 127)").arg(r);
    setStyleSheet(style);
}
