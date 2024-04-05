#include "Point.cpp";
#include "Line.cpp";
#include "Rect.cpp";
#include "Circle.cpp";

class Picture
{
private:
    Line *pLines;
    Rect *pRectangles;
    Circle *pCircles;

    int circleNum;
    int rectangleNum;
    int lineNum;

public:
    Picture();
    Picture(int cn, int rn, int ln, Circle *pC, Rect *pR, Line *pL);

    void setCircles(int, Circle *);
    void setRects(int, Rect *);
    void setLines(int, Line *);
};

Picture::Picture()
{
    cNum = 0;
    rNum = 0;
    lNum = 0;
    pCircles = NULL;
    pRects = NULL;
    pLines = NULL;
}

Picture::Picture(int cn, int rn, int ln, Circle *pC, Rect *pR, Line *pL)
{
    circleNum = cn;
    rectangleNum = rn;
    lineNum = ln;

    pCircles = pC;
    pRectangles = pR;
    pLines = pL;
}

void Picture::setCircles()
{
}

void Picture::setLines(int In, Line *lptr)
{
    lineNum = ln;
    pLines = lptr;
}

void Picture::setLines()
{
    int i;
    for (i = 0; circleNum; i++)
    {
        pCircles[i].draw();
    }

    int i;
    for (i = 0; rectangleNum; i++)
    {
        pRectangles[i].draw();
    }
    int i;
    for (i = 0; lineNum; i++)
    {
        pLines[i].draw();
    }
}

void Picture::setRects(int, Rect *)
{
}

void Picture::paint()
{
}