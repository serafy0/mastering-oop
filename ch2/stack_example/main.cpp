#include <iostream>
#include "Stack.cpp"
using namespace std;
int main()
{

    Stack s1(2);
    s1.push(5);

    s1.push(14);

    s1.push(20);

    cout << s1.pop() << endl;
    cout << s1.tos << endl;

    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    Stack s2;
    s2.push(3);

    return 0;
}