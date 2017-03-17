#include <iostream>
using namespace std;

class A
{
    int i,j;
    public:
        A(int n,int m)
    {
        i=n;
        j=m;
        cout<<"BKK\n";
    }
    ~A()
    {
        cout<<"BKD\n";
    }
    void showij()
    {
        cout<<i<<" "<<j<<"\n";
    }
};

class B:public A
{
    int k;
    public:
        B(int n,int m,int l):A(n,l)
    {
        k=n;
        cout<<"TKK\n";
    }
        ~B():A(2,3)
    {
        cout<<"TKD"<<endl;
    }
    void showk()
    {
        cout<<k<<endl;
    }
};

int main()
{
    B ob(1,2,3);
    ob.showij();
    ob.showk();
    return 0;
}