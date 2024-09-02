#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel label("Hello World!");
    label.setStyleSheet("QLabel:hover { color: green; }");
    label.show();
    return app.exec();
}
