#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int i=1,j=1,k,l;
    while (i<3)
    {
        while (j<11)
        {
            if (i==2)
            {
                k=6;
                l=10;
            }
            else 
            {
                k=2;
                l=6;
            }
            while (k<l)
            {
                    cout<<left<<k<<" * "<<setw(2)<<j<<" = "<<setw(8)<<k*j;
                k++;
            }
                cout<<endl;
            j++;
        }
        cout<<endl;
        j=1;       
        i++; 
    }
    
    return 0;}
