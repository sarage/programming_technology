#include <iostream>
using namespace std;
class Base
{
    public:
        Base()
    {
        cout<<"BaseKK"<<endl;
    }
        ~Base()
    {
        cout<<"BaseKD"<<endl;
    }
        int i;
};

class derived1:virtual public Base
{
    public:
        derived1()
    {
        cout<<"derived1KK"<<endl;
    }
        ~derived1()
    {
        cout<<"derived1KD"<<endl;
    }
        int j;
};

class derived2:virtual public Base
{
    public:
        derived2()
    {
        cout<<"derived2KK"<<endl;
    }
        ~derived2()
    {
        cout<<"derived2KD"<<endl;
    }
        int k;
};

class derived3:public derived1,public derived2
{
    public:
        derived3()
    {
        cout<<"derived3KK"<<endl;
    }
        ~derived3()
    {
        cout<<"derived3KD"<<endl;
    }
        int product()
    {
        return i*j*k;
    }
};

int main()
{
    derived3 ob;
    ob.i=3;
    ob.j=2;
    ob.k=4;
    cout<<ob.product()<<endl;
    return 0;
}
