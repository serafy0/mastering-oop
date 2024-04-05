#include <iostream>
using namespace std;

class Stack
{
private:
    int size;
    int *st;
    int tos;
    static int counter;

public:
    Stack(int n = 10);
    ~Stack();
    Stack(Stack &z);
    void push(int);
    int pop();

    Stack &operator=(const Stack &s);

    static int getCounter();
    friend void viewContent(Stack x);
};

Stack::Stack(int n)
{
    counter++;

    tos = 0;
    size = n;
    st = new int[size];
    cout << "This is the constructor of stack object of size " << size << " and the stack count is " << counter << endl;
}

Stack::~Stack()
{

    counter--;
    delete[] st;
    cout << "This is the destructor " << counter << endl;
}

Stack::Stack(Stack &z)
{
    tos = z.tos;
    size = z.size;
    st = new int[size];
    for (int i = 0; i < size; i++)
    {
        st[i] = z.st[i];
    }
    counter++;
}

void Stack::push(int n)
{
    if (tos == size)
    {
        cout << "Stack is full" << endl;
    }
    else
    {
        st[tos] = n;
        tos++;
    }
}

int Stack::pop()
{
    int val;
    if (tos == 0)
    {
        cout << "Stack is empty" << endl;
        val = -1;
    }
    else
    {
        tos--;
        val = st[tos];
    }
    return val;
}

int Stack::counter = 0;

int Stack::getCounter()
{
    return counter;
}

Stack &Stack::operator=(const Stack &s)
{
    delete[] this->st;
    this->tos = s.tos;
    this->size = s.size;
    this->st = new int[size];

    for (int i = 0; i < size; i++)
    {
        this->st[i] = s.st[i];
    }

    return *this;
}

void viewContent(Stack x)
{
    int t = x.tos;
    while (t != 0)
    {
        cout << x.st[--t] << endl;
    }
}
