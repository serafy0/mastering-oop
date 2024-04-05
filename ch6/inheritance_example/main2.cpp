#include <iostream>
#include "Derived.cpp"

using namespace std;
int main()
{
    Derived obj(10, 20, 30);
    Base *pt = &obj;

    cout << obj.product() << endl;
    cout << obj.Base::product() << endl;

    cout << pt->product() << endl;
}