#include <iostream>
#include "Derived.cpp"

using namespace std;
int main()
{
    Derived obj;
    obj.setA(3);
    obj.setB(7);
    obj.setC(2);

    cout << "obj: " << obj.productAB() << endl;
    cout << "obj: " << obj.productABC() << endl;
}