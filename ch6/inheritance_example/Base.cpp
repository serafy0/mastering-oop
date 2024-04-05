class Base
{
private:
    int a;

protected:
    int b;

public:
    Base()
    {
        a = b = 0;
    }

    Base(int n)
    {
        a = b = n;
    }
    Base(int x, int y)
    {
        a = x;
        b = y;
    }
    void setA(int x)
    {
        a = x;
    }
    void setB(int y)
    {
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }

    int productAB()
    {
        return a * b;
    }

    int product()
    {
        return a * b;
    }
};