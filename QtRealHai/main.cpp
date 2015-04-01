#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include "manager.hpp"
#include "window.hpp"

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    Window window("Chrom", 300, 300);
    Manager* haha = new Manager(&window);
    Q_UNUSED(haha);

    window.show();

    return app.exec();
}
