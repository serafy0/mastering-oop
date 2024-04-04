#include <iostream>

class Test
{
    int a; //<------ by default is private

public:
    void setA(int x);
    int getA();
};

int Test::getA()
{
    return a;
}

void Test::setA(int x)
{
    a = x;
}

int main()
{
    Test obj;

    obj.setA(10);
    // obj, a = 10;

    std::cout << obj.getA();
}