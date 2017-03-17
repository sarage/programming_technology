#include <iostream>
using namespace std;
#define size 3
class stack 
{
    char stk[size];
    int tos;
    public:
        void unit();
        void push(char ch);
        char pop();
};

void stack::unit()
{   tos=0;
}
void stack::push (char ch)
{
    if (tos==size)
    {
        cout<<"Stek toluk";
        return;
    }
        stk[tos]=ch;
        tos++;
}

char stack::pop()
{
    if (tos==0)
    {
        cout<<"Stek bosh";
        return 0;
    }
    tos--;
    return stk[tos];
}

int main()
{
    stack stack1,stack2;
    stack1.unit();
    stack1.push('A');
    stack1.push('B');
    stack1.push('C');
    stack2=stack1;
    for (int i=0;i<size;i++)
        cout<<stack1.pop()<<endl;
    cout<<endl;
    for (int i=0;i<size;i++)
        cout<<stack2.pop()<<endl;
    return 0;
}