#include <cstdlib>
#include <ctime>
#include <QApplication>
#include <QPushButton>
#include <QFont>
#include "manager.hpp"

Manager::Manager(QWidget *parent) :
    QWidget(parent)
{
    srand(time(0));
    evil();
}

void Manager::evil() {
    QPushButton* newButton = new QPushButton(this);
    newButton->setText("Real");

    newButton->setGeometry(rand() % 240, rand() % 280,
                           60, 20);

    theArmy.push_back(newButton);
    newButton->show();

    if(rand() % 100) {
        connect(newButton, SIGNAL(clicked()), this, SLOT(evil()));
    } else {
        newButton->setFont(QFont("Courier"));
        connect(newButton, SIGNAL(clicked()), QApplication::instance(), SLOT(quit()));
    }
}
