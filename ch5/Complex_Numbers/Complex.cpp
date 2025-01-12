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

void Complex::setComplex(int r, int i)
{
    real = r;
    imag = i;
}

void Complex::setComplex(int v)
{
    real = imag = v;
}

Complex addTo(float v, Complex c)
{
    Complex b;
    b.setReal(c.getReal() + 1);
    b.real = c.real + v;
    return b;
}

Complex operator+(float x, Complex c)
{
    Complex b;
    b.real = c.real + x;
    b.imag = c.imag;
    return b;
}

Complex Complex::operator+(float x)
{
    Complex b;
    b.real = real + x;
    b.imag = imag;

    return b;
}

Complex Complex::operator+(Complex c)
{
    Complex b;
    b.real = real + c.real;
    imag = imag + c.imag;

    return b;
}

Complex Complex::operator++()
{
    ++real;
    return *this;
}

Complex Complex::operator++(int)
{
    Complex temp = *this;
    real++;
    return temp;
}
