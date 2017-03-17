#include <iostream>
using namespace std;
int main ()
{
    int a[5],i,b[5],min=0;
    for (i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<5;i++)
    {
        b[i]=a[i]+a[i+1]+a[i+2];
    }
    for (i=0;i<5;i++)
    {
        min=b[0];
        if (b[i]<min)
        {
            min=b[i];
        }
    }
    cout<<min<<endl;
    return 0;
}
