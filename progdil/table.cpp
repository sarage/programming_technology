#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int i,j,k,l;
    for (i=1;i<3;i++)
    {
        for (j=1;j<=10;j++)
        {
             if (i!=2){
                k=2;
            l=6;}
            else {
                k=6;
                l=10;}
            for (k;k<l;k++)
                {
                     cout<<left<<k<<" * "<<setw(2)<<j<<" = "<<setw(8)<<k*j;
            
                }
                cout<<endl;
               }
               cout<<endl;
    }
    
    return 0;}
