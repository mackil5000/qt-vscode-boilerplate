#include <QCoreApplication>
#include <QDebug>
#include <array>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    // VARIABLES
    int age = 44;
    double height = 6.02;
    qInfo() << "Age:" << age;
    qInfo() << "Height:" << height;

    signed int dogs = -1;
    qInfo() << "Dogs:" << dogs;

    unsigned int cats = -1;
    qInfo() << "Dogs:" << dogs;

    qInfo() << sizeof(dogs);
    qInfo() << sizeof(cats);
    qInfo() << sizeof(height);
    // END VARIABLES

    // CONST
    const int id = 215;
    qInfo() << "constant id is:" << id;
    // END CONST

    // ENUMS
    enum Colors
    {
        red,
        green,
        blue = 256,
    };
    Colors mycolor = Colors::blue;
    // END ENUMS

    // STRUCTS
    struct product
    {
        int weight;
        double value;
        Colors color;
    };
    // END STRUCTS

    product laptop;
    qInfo() << "Size of struct 'laptop':" << sizeof(laptop);

    laptop.color = Colors::green;
    laptop.value = 540.87;
    laptop.weight = 3;

    qInfo() << "Weight:" << laptop.weight;

    // ARRAYS
    int ages[4] = {24, 523, 516, 634};
    ages[2] = 99;
    qInfo() << ages[2];
    qInfo() << ages;

    array<int, 5> cars;
    int size = cars.size();
    cars[0] = 1;
    cars[1] = 3;
    cars[2] = 4;
    cars[3] = 7;
    cars[4] = 54;

    qInfo() << cars[size - 1];

    // END ARRAYS

    return app.exec();
}