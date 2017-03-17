#include <iostream>
using namespace std;
int main ()
{
    int a[3][3],i,j,k;
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                if(a[i][j]==a[j][k])
                {
                    if (i!=j)
                    {
                        cout<<i<<"  "<<j<<endl;
                        cout<<j<<"  "<<k<<endl;
                    }
                }
            }
        }
    }
    cout<<"JOK"<<endl;
    return 0;
}
