#include <iostream>
using namespace std;
int main()
{
    int a[10],i,j,k,m=10,flag=0;
    for (i=0;i<10;i++)
    {
        cin>>a[i];
    }
    i=0;
    while (i!=m)
    {
        for (j=i+1;j<m;j++)
        {
            if (a[i]==a[j])
            {
                flag=1;
                for (k=0;k<m-1;k++)
                {
                    if (k==j)
                    {
                        a[k]=a[k+1];
                    }
                    if (k!=j &&k<j)
                    {a[k]=a[k];
                    }
                    if (k!=j &&k>j)
                    {a[k]=a[k+1];
                    }
                }
                m=m-1;
                a[i]=a[k];
            }            
        }
        if (flag==1)
        {
            flag=0;
        }
        else
            i++;
    }
for (i=0;i<m;i++)
{
cout<<a[i]<<endl;}    
    return 0;
}
