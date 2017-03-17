#include <iostream>
using namespace std;
#define size 3
struct stack 
{
    void unit();
    void push(char ch);
    char pop();
        private:
            char stk[size];
            int tos;
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
    stack stack1;
    stack1.unit();
    stack1.push('A');
    stack1.push('B');
    stack1.push('C');
    for (int i=0;i<size;i++)
        cout<<stack1.pop()<<endl;
    return 0;
}