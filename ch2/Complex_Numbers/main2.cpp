#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{

    Complex c, d;
    c.setComplex(3, 5);
    c.print();
    d.setComplex(5);
    d.print();
    return 0;
}