#include <iostream>
using namespace std;

class A
{
    int a;
    public:
        A(int n)
    {
        cout<<"A_BKK\n";
        a=n;
    }
       ~A()
    {
        cout<<"A_BKD\n";
    }
    int geta()
    {
        return a;
    }
};

class B
{
    int b;
    public:
        B(int n)
    {
        cout<<"B_BKK\n";
        b=n;
    }
        ~B()
    {
        cout<<"B_BKD\n";
    }
    int getb()
    {
        return b;
    }
};

class C:public A,public B
{
    int c;
    public:
        C(int x,int y,int z):A(x),B(y)
    {
        cout<<"C_BKK\n";
        c=z;
    }
        ~C()
    {
        cout<<"C_BKD\n";
    }
    void show()
    {
        cout<<geta()<<" "<<getb()<<" "<<c<<endl;
    }
};

int main()
{
    C ob(2,4,6);
    ob.show();
    return 0;
}