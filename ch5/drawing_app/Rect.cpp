#include "Point.cpp"
#include <iostream>
#include <graphics.h>

using namespace std;
class Rect
{
private:
    Point ul;
    Point lr;

public:
    Rect();
    Rect(int x1, int y1, int x2, int y2);
    void draw();
};

Rect::Rect() : ul(), lr()
{
    cout << "At rect const.";
}

Rect::Rect(int x1, int y1, int x2, int y2) : ul(x1, y1), lr(x2, y2)
{
    cout << "at rect const."
}

void Rect::draw()
{
    rectangle(ul.getX(), ul.getY(), lr.getx(), lr.getY());
}
