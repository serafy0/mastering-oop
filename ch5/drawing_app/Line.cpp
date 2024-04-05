#include "Point.cpp";
#include <iostream>
#include <graphics.h>

using namespace std;

class Line
{
private:
    Point start;
    Point end;
    SDL_Renderer *renderer;

public:
    Line();
    Line(int x1, int y1, int x2, int y2);
    void draw();
};

Line::Line() : start(), end()
{
    cout << "At line const. ";
}

Line::Line(int x1, int y1, int x2, int y2) : start(x1, y1), end(x2, y2)

{
    cout << "draw line at const.";
}

void Line::draw()
{
    line(start.getX(), end.getY(), end.getX(), end.getY());
}