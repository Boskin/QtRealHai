#include <QApplication>
#include <QPushButton>
#include "window.hpp"

Window::Window(const QString& title, int width,
               int height, QWidget *parent) :
    QWidget(parent) {
    setFixedSize(width, height);
    setWindowTitle(title);
}
