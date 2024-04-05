#include <iostream>
using namespace std;


class Stack
{
private:
    int size;
    int* st;
    int tos;
public:

    Stack(int n=10);
    ~Stack();
    void push(int);
    int pop();
};

Stack::Stack(int n)
{
    tos=0;
    size=n;
    st = new int[size];
    cout<<"This is the constructor of stack object of size"<<size<<endl;
}

Stack::~Stack()
{
    delete[] st;
    cout<<"This is the destructor"<<endl;

}

void Stack::push(int n){
    if (tos==size){
        cout<<"Stack is full"<<endl;

    }else{
        st[tos] = n;
        tos++;
    }
}

int Stack::pop(){
    int val;
    if(tos==0){
        cout<<"Stack is empty"<<endl;
        val=-1;
    }else{
        tos--;
        val = st[tos];
    }
    return val;
}