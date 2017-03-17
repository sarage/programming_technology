#include <iostream>
using namespace std;
int main()
{
    int a,i,s=0;
    cin>>a;
    for (i=1; i<a+1 ;i++)
    {
        if (a%i==0)
        {
            s++;
        }
        
    }
    if (s<=2)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}

