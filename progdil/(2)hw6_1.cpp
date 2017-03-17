#include <iostream>
#include <ctime>
using namespace std;
class TypeOfNumber
{
    clock_t start;
    public:
    TypeOfNumber();
    ~TypeOfNumber();
    int count(int n);
    void result(int s);
};

TypeOfNumber::TypeOfNumber()
{
    start=clock();
}

TypeOfNumber::~TypeOfNumber()
{
    clock_t end;
    end=clock();
    cout<<(end-start);
}

int TypeOfNumber::count(int n)
{
    int i,s=0;
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        s++;
    }
return s;    
}

void TypeOfNumber::result(int s)
{
    if (s<3)
        cout<<"Simple number"<<endl;
    else
        cout<<"Composite number"<<endl;
}

int main()
{
    TypeOfNumber ob;
    int n,s;
    //cout<<"Write the number"<<endl;
    n=3;
    s=ob.count(n);
    ob.result(s);
    return 0;
}
