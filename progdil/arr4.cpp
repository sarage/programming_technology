#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
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
                        k=j;
                    }
                    if (x[i][j]<min)
                    {    min=x[i][j];
                        y=j;
                    }
        }
    }
    cout<<max<<endl;
    cout<<k<<endl;
    cout<<min<<endl;
    cout<<y<<endl;
        for (i=0;i<4;i++)
        {
            temp=x[i][k];
            x[i][k]=x[i][y];
            x[i][y]=temp;
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