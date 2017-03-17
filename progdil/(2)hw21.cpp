#include <iostream>
#include <string>
using namespace std;
template <class x> 
    x sum(x a,x b)
{
    return a+b;
}

int main()
{
    cout<<"Choose what type you want write:"<<endl;
    cout<<"1 - Integer"<<endl;
    cout<<"2 - String"<<endl;
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
            int max = sum(a,b);
            cout<<"sum="<<max<<endl;
        }
        break;
        case 2:
        {
            string a,b;
            cout<<"Please, write two sentences:"<<endl;
            cin>>a;
            cin>>b;
            string max = sum(a,b);
            cout<<"sum="<<max<<endl;
        }
        break;
        case 3:
        {
            float a,b;
            cout<<"Please, write two float number:"<<endl;
            cin>>a;
            cin>>b;
            float max = sum(a,b);
            cout<<"sum="<<max<<endl;
        }
        break;
    }
    return 0;
}