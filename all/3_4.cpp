#include <iostream>
using namespace std;
int main ()
{
    int n,i,s,t=0,j;
    cin>>n;
    for (i=n;i>0;i=i-1)
    {
        s=0;
        if (n%i==0)
        {
            for (j=i;j>0;j=j-1)
            {
                if (i%j==0)
                {
                    s=s+1;
                }
            }
        if (s<=2)
        {
           t=t+i;
        }            
        }
    }
    cout<<t<<endl;
return 0;
}
