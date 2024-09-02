#include <QApplication>
#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget();

    QLabel *label1 = new QLabel("Name:");
    QLineEdit *usernameLineEdit = new QLineEdit();
    usernameLineEdit->setPlaceholderText("Enter your username here ... ");

    QLabel *label2 = new QLabel("Password:");
    QLineEdit *passwordLineEdit = new QLineEdit();
    passwordLineEdit->setPlaceholderText("Enter your password here ... ");
    passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

    QPushButton * btn1 = new QPushButton("Login");
    QPushButton * btn2 = new QPushButton("Register");

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(label1);
    layout->addWidget(usernameLineEdit);
    layout->addWidget(label2);
    layout->addWidget(passwordLineEdit);
    layout->addWidget(btn1);
    layout->addWidget(btn2);

    window->setLayout(layout);
    window->show();
    return app.exec();
}