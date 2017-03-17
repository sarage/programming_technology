#include <iostream>
#include <cstdlib>
using namespace std;
int main ()
{
    int i,j,x[3][4];
    for (i=0;i<3;i++){
        cout<<endl;
        for (j=0;j<4;j++)
        {
            x[i][j]=1+rand()%10;
            cout<<x[i][j]<<" ";}}
return 0;
        }