#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <QWidget>
#include <QString>

class QPushButton;

class Window : public QWidget
{
    Q_OBJECT
public:
    explicit Window(const QString& title, int height,
                    int width, QWidget *parent = 0);

private:

signals:

public slots:

};

#endif // WINDOW_HPP
