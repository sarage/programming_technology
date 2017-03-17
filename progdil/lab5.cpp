#include <iostream>
#include <ctime>
using namespace std;
int main ()
{
    int i,x[200],s=0;
    for (i=0;i<20;i++)
    {
        x[i]=-50+random(100);
    }
        for (i=0;i<20;i++)
    {
         cout<<x[i]<<" ";
    }
    for (i=0;i<20-1;i++)
    {
        if ((x[i]<0) && (x[i+1]>0) || (x[i]>0) && (x[i+1]<0))
        s++;
    }
    cout<<endl;
    cout<<"s="<<s<<endl;
return 0;
        }