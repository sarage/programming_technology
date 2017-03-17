#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main ()
{
    int i,j,x[9][9],s=0,y[9];
    for (i=0;i<9;i++)
    {
        cout<<endl;
        for (j=0;j<9;j++)
        {
            x[i][j]=rand()%99;
            cout<<setw(3)<<left<<x[i][j]<<" ";
        }
    }
    cout<<endl;
    cout<<endl;
    for (i=0;i<9;i++)
    {
        for (j=0;j<9;j++)
        {
            s=s+x[i][j]+x[j][i];
        }
    y[i]=s;
    s=0;    
    }
    for (i=0;i<9;i++)
    {
        for (j=0;j<9;j++)
        {
            if (i==j)
                x[i][j]=y[i];
        }
    }
    for (i=0;i<9;i++)
    {
        cout<<endl;
        for (j=0;j<9;j++)
        {
            cout<<setw(4)<<left<<x[i][j]<<" ";
        }
    }
    cout<<endl;
return 0;
        }