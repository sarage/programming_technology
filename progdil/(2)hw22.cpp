#include <iostream>
using namespace std;
template <class x> 
    x sort(x &a,x &b)
{
    x temp;
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
}

int main()
{
    cout<<"Choose what type you want write:"<<endl;
    cout<<"1 - Integer"<<endl;
    cout<<"2 - Char"<<endl;
    cout<<"3 - Float"<<endl;
    int n;
    cin>>n;
    switch(n)
    {
        case 1:
        {
            int a,b;
            cout<<"Please, write two integer number:"<<endl;
            cin>>a;
            cin>>b;
            sort(a,b);
            cout<<a<<b<<endl;
        }
        break;
        case 2:
        {
            char a,b;
            cout<<"Please, write two symbols:"<<endl;
            cin>>a;
            cin>>b;
            sort(a,b);
            cout<<a<<b<<endl;
        }
        break;
        case 3:
        {
            float a,b;
            cout<<"Please, write two float number:"<<endl;
            cin>>a;
            cin>>b;
            sort(a,b);
            cout<<a<<b<<endl;
        }
        break;
    }
    return 0;
}