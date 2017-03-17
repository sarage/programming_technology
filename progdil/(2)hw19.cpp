#include <iostream>
using namespace std;
class base
{
    public:
        int i;
    base(int x)
    {
        i=x;
    }
    virtual void fun()
    {
        cout<<"Base class"<<"  "<<i<<endl;
    }
};

class derived1:public base
{
    public:
        derived1(int x):base(x){}
    void fun()
            {
                cout<<"derived1 class"<<"  "<<(i+i)<<endl;
            }
};

class derived2:public derived1
{
    public:
        derived2(int x):derived1(x){}
    void fun()
    {
        cout<<"derived2 class"<<"  "<<(i*i)<<endl;
    }
};

int main()
{
    base *p;
    base ob(10);
    derived1 ob1(10);
    derived2 ob2(10);
    p=&ob;
    p->fun();
    p=&ob1;
    p->fun();
    p=&ob2;
    p->fun();
    return 0;
}