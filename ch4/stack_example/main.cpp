#include <iostream>
#include "Stack.cpp"
using namespace std;

int main()
{

    Stack s1(3);
    Stack s2(2);
    Stack s3(5);

    s1.push(13);
    s1.push(13);

    s2 = s1;
    // s2 = s1 = s3;

    viewContent(s1);
    viewContent(s3);
    viewContent(s2);

    return 0;
}