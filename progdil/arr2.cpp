#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int i,j,x[5][5],y,p,t,k,max,min,temp;
    for (i=0;i<5;i++)
    {
        cout<<endl;
        for (j=0;j<5;j++)
        {
            x[i][j]=1+rand()%9;
            cout<<x[i][j]<<" ";
        }
    }
            max=x[0][0];
            min=x[0][0];
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i==j)
                {
                    if (x[i][j]>max)
                    {   max=x[i][j];
                        k=i;
                        p=j;
                    }
                    if (x[i][j]<min)
                    {    min=x[i][j];
                        y=i;
                        t=j;
                    }
                }
        }
    }
    cout<<endl;
    cout<<endl;
    cout<<max<<endl;
    cout<<k<<endl;
    cout<<p<<endl;
    cout<<min<<endl;
    cout<<y<<endl;
    cout<<t<<endl;
    cout<<endl;
    cout<<endl;
    temp=x[k][p];
    x[k][p]=x[y][t];
    x[y][t]=temp;
     for (i=0;i<5;i++)
    {
        cout<<endl;
        for (j=0;j<5;j++)
        {
            cout<<x[i][j]<<" ";
        }
    }               
return 0;
}