#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <QWidget>
#include <list>

class QPushButton;

class Manager : public QWidget
{
    Q_OBJECT
public:
    explicit Manager(QWidget *parent = 0);

private:
    std::list<QPushButton*> theArmy;

signals:

public slots:
    void evil();

};

#endif // MANAGER_HPP
