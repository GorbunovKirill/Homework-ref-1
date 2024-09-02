#pragma once
#include <vector>
#include <cmath>
#include <string>


class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculateVolume() const = 0;
    virtual void shift(int dx, int dy, int dz) = 0;
    virtual void scaleX(int factor) = 0;
    virtual void scaleY(int factor) = 0;
    virtual void scaleZ(int factor) = 0;
    virtual ~Shape() = default;

protected:
    std::vector<int> coordinates;
};

// Класс для линии
class Line : public Shape {
public:
    Line(int x1, int y1, int x2, int y2);
    double calculateArea() const override;
    double calculateVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scaleX(int factor) override;
    void scaleY(int factor) override;
    void scaleZ(int factor) override;

private:
    int x1, y1, x2, y2;
};

// Класс для прямоугольника
class Rectangle : public Shape {
public:
    Rectangle(int x1, int y1, int x2, int y2);
    double calculateArea() const override;
    double calculateVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scaleX(int factor) override;
    void scaleY(int factor) override;
    void scaleZ(int factor) override;

private:
    int x1, y1, x2, y2;
};

class Cuboid : public Shape {
public:
    Cuboid(int x1, int y1, int z1, int x2, int y2, int z2);
    double calculateArea() const override;
    double calculateVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scaleX(int factor) override;
    void scaleY(int factor) override;
    void scaleZ(int factor) override;

private:
    int x1, y1, z1, x2, y2, z2;
};


class Circle : public Shape {
public:
    Circle(int x, int y, double radius);
    double calculateArea() const override;
    double calculateVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scaleX(int factor) override;
    void scaleY(int factor) override;
    void scaleZ(int factor) override;

private:
    int x, y;
    double radius;
};

class Cylinder : public Shape {
public:
    Cylinder(int x, int y, double radius, double height);
    double calculateArea() const override;
    double calculateVolume() const override;
    void shift(int dx, int dy, int dz) override;
    void scaleX(int factor) override;
    void scaleY(int factor) override;
    void scaleZ(int factor) override;

private:
    int x, y;
    double radius, height;
};
