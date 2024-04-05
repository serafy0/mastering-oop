#include "Point.cpp";
#include <iostream>
#include <graphics.h>

class Circle
{
private:
    Point center;
    int radius;

public:
    Circle();
    Circle(int m, int n, int r);
    void draw();
};

Circle::Circle() : center()
{
    radius = 0;
    cout << "at circle const."
}

Circle::Circle(int m, int n, int r) : center(m, n)
{
    radius = r;
    cout << "at circle const.";
}

void Circle::draw()
{
    circle(center.getX(), center.getY(), radius);
}