#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    int age = 44;
    double height = 6.02;
    qInfo() << "Age:" << age;
    qInfo() << "Height:" << height;
    age = 44.90;
    return app.exec();
}