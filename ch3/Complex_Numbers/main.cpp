#include <iostream>
#include "Complex.h"
using namespace std;

Complex subtract(Complex c1, Complex c2)
{
    return c1.sub(c2);
}

Complex add(Complex c1, Complex c2)
{
    return c1.add(c2);
}
int main()
{

    Complex num1, num2, result;
    cout << "enter first real number" << endl;
    float input;
    float input2;
    cin >> input;
    cout << "+ ";
    cin >> input2;
    cout << "i" << endl;

    num1.setReal(input);
    num1.setImag(input2);
    cout << "enter second real number" << endl;
    cin >> input;
    cout << "+ ";
    cin >> input2;
    cout << "i" << endl;
    num2.setReal(input);
    num2.setImag(input2);

    num1.print();
    num2.print();

    result = add(num1, num2);
    result.print();

    result = subtract(num1, num2);

    result.print();
}