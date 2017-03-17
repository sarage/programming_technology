#include <iostream>
using namespace std;
int main()
{
    int x,y,i,t,o,p,l;
    cin>>x;
    cin>>y;
    if (x<0)
    {
        if (y<0)
        {
            cout<<"+"<<endl;
        }
        else 
        {
            cout<<"-"<<endl;
        }
    }
    else
    {
            if (y<0)
            {
                cout<<"-"<<endl;
            }
            else 
            {
                cout<<"+"<<endl;
            }
    }    
    if (x<y)
    {
        for(i=x;i>0;i=i-1)
        {
            if(x%i==0)
            {
                if(y%i==0)
                {
                   t=i;
                    goto end;
                }
        
            }
        }
        end:
        o=x/t;
        p=y/t;
        cout<<o<<"/"<<p<<endl;
    }
    else
    {
        l=int(x/y);
        cout<<l<<endl;
        a:x=x-y;
        if (x>y)
        {
            goto a;
        }   
        else 
        {
            cout<<x<<"/"<<y<<endl;
        }
    }
    
    return 0;
}