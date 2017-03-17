#include <iostream>
using namespace std;
int main ()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}},i,j,k=0,s=0,t=-1;
    /*for (i=0;i<3;i++)
    {
        for (j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }*/
    rf:
    t++;
    for (i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if (a[0][t]<a[i][j])
            {
                s=s+1;
            }
            if (a[2][t]>a[i][j])
            {
                k=k+1;
            }
        }
    }
    if (t<3)
    {
        goto rf;
    }
    cout<<s<<endl;
    cout<<k<<endl;    
    return 0;
}
