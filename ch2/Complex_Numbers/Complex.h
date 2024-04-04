#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    float real;
    float imag;

public:
    void setReal(float);
    void setImag(float);
    float getReal();
    float getImag();
    void print();

    Complex add(Complex c);
    Complex sub(Complex c);
    void setComplex(int r, int i);
    void setComplex(int v);
};

#endif