#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main ()
{
    int i,j,x[4][5],y,k,max,min,temp;
    for (i=0;i<4;i++){
        cout<<endl;
        for (j=0;j<5;j++)
        {
            x[i][j]=1+rand()%30;
            cout<<setw(3)<<left<<x[i][j]<<"  ";}}
    for (i=0;i<4;i++){
        for (j=0;j<5;j++)
        {
            }}
                  max=x[0][0];
            min=x[0][0];
    for (i=0;i<4;i++)
    {
        for (j=0;j<5;j++)
        {
                    if (x[i][j]>max)
                    {   max=x[i][j];
                        k=i;
                    }
                    if (x[i][j]<min)
                    {    min=x[i][j];
                        y=i;
                    }
        }
    }
    cout<<max<<endl;
    cout<<k<<endl;
    cout<<min<<endl;
    cout<<y<<endl;
        for (j=0;j<5;j++)
        {
            temp=x[k][j];
            x[k][j]=x[y][j];
            x[y][j]=temp;
        }
      cout<<endl;
       cout<<endl;    
    for (i=0;i<4;i++)
    {
        cout<<endl;
        for (j=0;j<5;j++)
        {
            cout<<setw(3)<<left<<x[i][j]<<"  ";
        }
    }        
return 0;
    }