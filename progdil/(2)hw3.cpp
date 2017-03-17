#include <iostream>
#define size 3
using namespace std;
class stack 
{
    char stk[size];
    int tos;
    public:
        stack(int n);
        void push(char ch);
        char pop();
};

stack::stack(int n)
{   tos=n;
}
void stack::push (char ch)
{
    if (tos==size)
    {
        cout<<"Stek toluk"<<endl;
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
    stack ob(0);
    ob.push('A');
    ob.push('B');
    ob.push('C');
    ob.push('D');
    for (int i=0;i<size;i++)
        cout<<ob.pop()<<endl;
    return 0;
}