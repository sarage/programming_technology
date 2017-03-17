#include <iostream>
#include <string>
using namespace std;
template <class x> 
    x Find_max(x a,x b)
{
    if (a>b)
        return a;
    else
        return b;
}

int main()
{
    cout<<"Choose what type you want write:"<<endl;
    cout<<"1 - Integer"<<endl;
    cout<<"2 - String"<<endl;
    cout<<"3 - Float"<<endl;
    cout<<"4 - Char"<<endl;
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
            int max = Find_max(a,b);
            cout<<"max="<<max<<endl;
        }
        break;
        case 2:
        {
            string a,b;
            int a1,b1;
            cout<<"Please, write two sentences:"<<endl;
            cin>>a;
            cin>>b;
            a1=a.size();
            b1=b.size();
            int max = Find_max(a1,b1);
            cout<<"max="<<max<<endl;
        }
        break;
        case 3:
        {
            float a,b;
            cout<<"Please, write two float number:"<<endl;
            cin>>a;
            cin>>b;
            float max = Find_max(a,b);
            cout<<"max="<<max<<endl;
        }
        break;
        case 4:
        {
            char a,b;
            cout<<"Please, write two symbol:"<<endl;
            cin>>a;
            cin>>b;
            char max = Find_max(a,b);
            cout<<"max="<<max<<endl;
        }
        break;
    }
    return 0;
}