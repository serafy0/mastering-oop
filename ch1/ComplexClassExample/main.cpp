#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, char const *argv[])
{

    Complex num1, num2, resultNum;
    num1.setReal(7);
    num1.setImag(2); // 7+2i

    num2.setReal(5);
    num2.setImag(3); // 5+3i

    resultNum = num1.add(num2);
    resultNum.print();

    resultNum = num1.sub(num2);
    resultNum.print();

    return 0;
}
