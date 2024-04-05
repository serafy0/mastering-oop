class Point
{
private:
    int x;
    int y;

public:
    Point();
    Point(int m, int n);
    void setX(int m);
    int getX();
    int getY();
};

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(int m, int n)
{
    x = m;
    y = n;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}
