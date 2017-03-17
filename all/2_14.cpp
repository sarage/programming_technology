#include <iostream>
using namespace std;
int main()
{
    int x,y,i,r;
    cin>>x;
    cin>>y;
    if (x>y)
    {
        r=x;
    }
    else 
    {
        r=y;
    }
    for (i=r;i>0;i=i-1)
    {
        if (x%i==0)
        {
            if (y%i==0)
            {
                cout<<i<<endl;
                goto end;
            }
        }    
    }            
    end:
     return 0;
}
