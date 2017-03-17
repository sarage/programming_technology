#include <iostream>
using namespace std;
int main ()
{
    int a[10],i,j=10,b[10];
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<10;i++)
    {
        j=j-1;
        b[i]=a[j];
    }
    for (i=0;i<10;i++)
    {
     cout<<b[i]<<endl;   
    }
    return 0;
}
