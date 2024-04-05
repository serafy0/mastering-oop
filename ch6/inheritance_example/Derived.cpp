#include "Base.cpp"
class Derived : public Base
{
private:
    int c;

public:
    Derived() : Base()
    {
        c = 0;
    }
    Derived(int n) : Base(n)
    {
        c = n;
    }
    Derived(int x, int y, int z) : Base(x, y)
    {
        c = z;
    }
    void setC(int z)
    {
        c = z;
    }
    int getC()
    {
        return c;
    }

    int productABC()
    {
        // return a * b * c;
        return productAB() * c;
    }

    int product()
    {
        return getA() * b * c;
        return Base::product() * c;
    }
};