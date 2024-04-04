#ifndef COMPLEX_H
#define COMPLEX_H
using namespace std;
class Complex
{
    float real;
    float imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
        cout << "This is the default constructor"
             << "(" << real << " + " << imag << "i)" << endl;
    }
    Complex(float n)
    {
        real = imag = n;
        cout << "This is the overloaded constructor, with one parameter"
             << "(" << real << " + " << imag << "i)" << endl;
    }

    Complex(float r, float i)
    {
        real = r;
        imag = i;
        cout << "overloaded with two parameters"
             << "(" << real << " + " << imag << "i)" << endl;
    }

    ~Complex()
    {
        cout << "destroyed object: "
             << "(" << real << " + " << imag << "i)" << endl;
    }
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