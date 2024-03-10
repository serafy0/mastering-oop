#include <iostream>
#include "Complex.h"
using namespace std;

void Complex::setReal(float i)
{
    real = i;
}

void Complex::setImag(float i)
{
    imag = i;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImag()
{
    return imag;
}

void Complex::print()
{

    if (imag < 0)
    {
        cout << real << " - " << fabs(imag) << "i" << endl;
    }
    else
    {
        cout << real << " + " << fabs(imag) << "i" << endl;
    }
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = c.real + real;
    temp.imag = c.imag + imag;
    return temp;
}

Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.real = c.real - real;
    temp.imag = c.imag - imag;
    return temp;
}
