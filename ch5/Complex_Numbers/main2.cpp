#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{

    // static allocation
    Complex arr[3] = {Complex(2), Complex(), Complex(5, 7)};
    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    // Dynamic allocation
    Complex *cptr;
    cptr = new Complex(2.1, 7.3);
    cptr = new Complex[12];
    return 0;
}