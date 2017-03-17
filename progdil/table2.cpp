#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int i=0,j,k,l;
        do
    {i++;
       j=0; 
          do  
        { j++;
             if (i==2)
            {
                k=5;
                l=9;
            }
            else 
            {
                k=1;
                l=5;
            }
               do 
                {
                    k++;
                    cout<<left<<k<<" * "<<setw(2)<<j<<" = "<<setw(8)<<k*j;
                    }
                
                 while (k<l);
                     cout<<endl;
        }
        while (j<10);
            cout<<endl;
    }
    while (i<2);
return 0;}
