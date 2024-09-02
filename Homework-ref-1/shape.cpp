#include "shape.h"

Line::Line(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {
    coordinates = { x1, y1, x2, y2 };
}

double Line::calculateArea() const {
    return 0;
}

double Line::calculateVolume() const {
    return 0;
}

void Line::shift(int dx, int dy, int dz) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
}

void Line::scaleX(int factor) {
    x1 *= factor;
    x2 *= factor;
}

void Line::scaleY(int factor) {
    y1 *= factor;
    y2 *= factor;
}

void Line::scaleZ(int factor) {

}


Rectangle::Rectangle(int x1, int y1, int x2, int y2) : x1(x1), y1(y1), x2(x2), y2(y2) {
    coordinates = { x1, y1, x2, y2 };
}

double Rectangle::calculateArea() const {
    return std::abs(x2 - x1) * std::abs(y2 - y1);
}

double Rectangle::calculateVolume() const {
    return 0;
}

void Rectangle::shift(int dx, int dy, int dz) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
}

void Rectangle::scaleX(int factor) {
    x1 *= factor;
    x2 *= factor;
}

void Rectangle::scaleY(int factor) {
    y1 *= factor;
    y2 *= factor;
}

void Rectangle::scaleZ(int factor) {

}


Cuboid::Cuboid(int x1, int y1, int z1, int x2, int y2, int z2) : x1(x1), y1(y1), z1(z1), x2(x2), y2(y2), z2(z2) {
    coordinates = { x1, y1, z1, x2, y2, z2 };
}

double Cuboid::calculateArea() const {
    int length = std::abs(x2 - x1);
    int width = std::abs(y2 - y1);
    int height = std::abs(z2 - z1);
    return 2 * (length * width + width * height + height * length);
}

double Cuboid::calculateVolume() const {
    int length = std::abs(x2 - x1);
    int width = std::abs(y2 - y1);
    int height = std::abs(z2 - z1);
    return length * width * height;
}

void Cuboid::shift(int dx, int dy, int dz) {
    x1 += dx; y1 += dy; z1 += dz;
    x2 += dx; y2 += dy; z2 += dz;
}

void Cuboid::scaleX(int factor) {
    x1 *= factor;
    x2 *= factor;
}

void Cuboid::scaleY(int factor) {
    y1 *= factor;
    y2 *= factor;
}

void Cuboid::scaleZ(int factor) {
    z1 *= factor;
    z2 *= factor;
}

Circle::Circle(int x, int y, double radius) : x(x), y(y), radius(radius) {
    coordinates = { x, y };
}

double Circle::calculateArea() const {
    return 3.14 * radius * radius;
}

double Circle::calculateVolume() const {
    return 0;
}

void Circle::shift(int dx, int dy, int dz) {
    x += dx; y += dy;
}

void Circle::scaleX(int factor) {
    radius *= factor;
}

void Circle::scaleY(int factor) {
    radius *= factor;
}

void Circle::scaleZ(int factor) {
   
}

Cylinder::Cylinder(int x, int y, double radius, double height) : x(x), y(y), radius(radius), height(height) {
    coordinates = { x, y };
}

double Cylinder::calculateArea() const {
    return 2 * 3.14 * radius * (radius + height);
}

double Cylinder::calculateVolume() const {
    return 3.14 * radius * radius * height;
}

void Cylinder::shift(int dx, int dy, int dz) {
    x += dx; y += dy;
}

void Cylinder::scaleX(int factor) {
    radius *= factor;
}

void Cylinder::scaleY(int factor) {
    radius *= factor;
}

void Cylinder::scaleZ(int factor) {
    height *= factor;
}
