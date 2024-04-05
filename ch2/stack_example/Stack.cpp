#include <iostream>
using namespace std;


class Stack
{
private:
    int size;
    int* st;
    int tos;
    static int counter;
public:
    Stack(int n=10);
    ~Stack();
    void push(int);
    int pop();

    static int getCounter();
};

Stack::Stack(int n)
{
    counter++;

    tos=0;
    size=n;
    st = new int[size];
    cout<<"This is the constructor of stack object of size "<<size<<" and the stack count is "<<counter<<endl;
}

Stack::~Stack()
{    
    
    counter--;
    delete[] st;
    cout<<"This is the destructor "<<counter<<endl;

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

int Stack::counter =0;

int Stack::getCounter(){
    return counter;
}