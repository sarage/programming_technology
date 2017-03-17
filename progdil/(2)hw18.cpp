
#include<iostream>
using namespace std;
class Base
{
    public:
    int o;        
};

class derived1: public Base 
{
    public :
        int i,j;
    void fun1(int b,int r)
    {
        i=b;
        j=r;
    }    
};
class derived2: public Base 
{
    public :
        int k;
    void fun2(int c)
    {
        k=c;
    }    
};
class derived3:public derived1,public derived2
{
        public:
    void fun3(int a,int b,int c)
    {
        fun1(a,b);
        fun2(c);
    }
        int product()
    {
        return i*j*k;
    }
    
};
int main()
{
    derived3 ob;
    ob.fun3(3,4,5);
    cout<<ob.product()<<endl;
    return 0;
}