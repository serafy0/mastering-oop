#include "Derived.cpp"
class SecondDerived : public Derived
{
private:
    int d;

public:
    SecondDerived() : Derived()
    {
        d = 0;
    }
    SecondDerived(int n) : Derived(n)
    {
        d = n;
    }
    SecondDerived(int x, int y, int z) : Derived(x, y, m)
    {
        d = z;
    }
    void setD(int z)
    {
        d = z;
    }
    int getD()
    {
        return d;
    }

    int product()
    {
        // return a * b * c * d;
        return getA() * b * getC() * d;
    }
};