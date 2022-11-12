#include <QCoreApplication>
#include <QDebug>
#include <array>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication app(argc, argv);

    // int start = 80;
    // int max = 100;

    // int i = start;

    // evaluate first
    // while (i < max)
    // {
    //     qInfo() << "While:" << i;
    //     i++;
    // }

    // qInfo("");

    // i = 1000;

    // // do first, then evaluate. will always run at least once
    // do {
    //     qInfo() << "Do:" << i;
    //     i++;
    // } while (i < max);

    int max = 0;
    qInfo() << "Please enter a max value";
    cin >> max;
    qInfo() << "You entered" << max;

    if (max <= 0) qFatal("Invalid number");

    for (int i = 0; i < max; i++) {
        qInfo() << "i=" << i;
    }

    array<int, 4> ages = {44, 56, 32, 16};

    for (int i = 0; i < ages.size(); i++) {
        qInfo() << "Age index:" << ages[i];
    }

    return app.exec();
}