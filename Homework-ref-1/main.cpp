#include <iostream>
#include "shape.h"

int main() {
    Line line(0, 0, 10, 10);
    Rectangle rect(0, 0, 5, 5);
    Cuboid cuboid(0, 0, 0, 10, 10, 10);
    Circle circle(0, 0, 5);
    Cylinder cylinder(0, 0, 5, 10);

    // Примеры использования методов
    std::cout << "Line area: " << line.calculateArea() << std::endl;
    std::cout << "Rectangle area: " << rect.calculateArea() << std::endl;
    std::cout << "Cuboid volume: " << cuboid.calculateVolume() << std::endl;
    std::cout << "Circle area: " << circle.calculateArea() << std::endl;
    std::cout << "Cylinder volume: " << cylinder.calculateVolume() << std::endl;

    // Применение преобразований
    line.shift(2, 2, 0);
    rect.scaleX(2);
    circle.scaleY(0.5);
    cylinder.shift(1, 1, 1);

    return 0;
}
