#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QPushButton my_btn(QIcon("filesaveas.png"), "Push me");
    my_btn.setToolTip("Click this to turn back at any point");
    my_btn.show();
    return app.exec();
}