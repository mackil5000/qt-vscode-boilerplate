#include <iostream>
#include <QCoreApplication>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    int age = 0;
    qInfo() << "Enter your age";
    cin >> age;
    qInfo() << "Your are" << age << "years old";

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";
    qWarning() << "Warning";

    return app.exec();
}