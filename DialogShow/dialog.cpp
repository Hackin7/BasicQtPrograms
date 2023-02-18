#include "dialog.h"

#include <QtWidgets>

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
{
    label = new QLabel(tr("hello world"));


    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(label);

    setLayout(mainLayout);

    setWindowTitle(tr("Dialog"));
}
