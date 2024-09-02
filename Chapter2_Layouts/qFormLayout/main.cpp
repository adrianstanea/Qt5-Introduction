#include <QApplication>
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QDateTimeEdit>
#include <QSpinBox>
#include <QComboBox>
#include <QLabel>
#include <QStringList>
#include <QFormLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget();

    QLineEdit *firstNameLineEdit = new QLineEdit();
    QLineEdit *lastNameLineEdit = new QLineEdit();

    QSpinBox *ageSpinBox = new QSpinBox();
    ageSpinBox->setRange(1, 100);

    QComboBox *employmentStatusComboBox = new QComboBox();
    QStringList employmentStatus{"Unemployed", "Employed", "NA"};
    employmentStatusComboBox->addItems(employmentStatus);

    QFormLayout *personalInoFormLayout = new QFormLayout();
    
    personalInoFormLayout->addRow("First Name:", firstNameLineEdit);
    personalInoFormLayout->addRow("Last Name:", lastNameLineEdit);
    personalInoFormLayout->addRow("Age:", ageSpinBox);
    personalInoFormLayout->addRow("Employment Status:", employmentStatusComboBox);

    window->setLayout(personalInoFormLayout);
    window->show();
    return app.exec();
}