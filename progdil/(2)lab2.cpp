#include <iostream>
#include <string>
using namespace std;
#define size 3
class stack 
{
    string name;
    char stk[size];
    int tos;
    public:
        stack(string n)
            {
                tos=0;
                name=n;
            };
        void push(char ch);
        char pop();
};
void stack::push (char ch)
{
    if (tos==size)
    {
        cout<<name<<" Stek toluk"<<endl;
        return;
    }
        stk[tos]=ch;
        tos++;
}

char stack::pop()
{
    if (tos==0)
    {
        cout<<name<<" Stek bosh"<<endl;
        return 0;
    }
    tos--;
    return stk[tos];
}

int main()
{
    stack stack1("Aizhan"),stack2("Aigul");
    stack1.push('A');
    stack1.push('B');
    stack1.push('C');
    stack1.push('D');
    stack2.push('D');
    for (int i=0;i<size;i++)
        cout<<stack1.pop()<<endl;
    cout<<endl;
    for (int i=0;i<size;i++)
        cout<<stack2.pop()<<endl;
    return 0;
}