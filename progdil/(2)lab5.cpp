#include <iostream>
using namespace std;

class A1
{
    int n,k;
    public:
        A1(int a,int l)
    {
        n=a;
        k=l;
    }
    int korsotA1()
    {
        return n+6*k;
    }
};

class A2
{
    int m,o;
    public:
        A2(int b,int c)
    {
        m=b;
        o=c;
    }
    int korsotA2()
    {
        return m*o+2;
    }
};

class B1:virtual public A1, virtual public A2
{
    int n1,m1;
    public:
        B1(int a,int b):A1(a,b),A2(a,b)
    {
        n1=a;
        m1=b;
    }
    int korsotB1()
    {
        return n1+m1-2*m1+6;
    }
};

class B2
{
    int n2,m2;
    public:
        B2(int a,int b)
    {
        n2=a;
        m2=b;
    }
    int korsotB2()
    {
        return 2*n2+6*m2-5;
    } 
};

class C:virtual public B1,virtual public B2
{
    int n3,m3;
    public:
        C(int a,int b):A1(a,b),A2(a,b),B1(a,b),B2(a,b)
    {
        n3=a;
        m3=b;
    }
    int korsotC()
    {
       return n3*m3*n3*3;
    }
};

class D:public C
{
     int n4,m4;
    public:
        D(int a,int b):A1(a,b),A2(a,b),B1(a,b),B2(a,b),C(a,b)
    {
        n4=a;
        m4=b;
    }
    void show()
    {
        cout<<korsotA1()<<" "<<korsotA2()<<" "<<korsotB1()
        <<" "<<korsotB2()<<" "<<korsotC()<<" "<<(n4*10-2*m4)<<endl;
    }
};

int main()
{
    D ob(2,5);
    ob.show();
    return 0;
}