// eki olshomduu massivge dinamikalyk orun beruu

#include<iostream>
using namespace std;

int main ()
{
    const int n=4;
    const int m=5;
    int b;
    
    int ** a = new int *[n]; //korsotkuchtordun massivi
    for (int i=0;i<n;i++)
    {
        a[i]=new int[m]; // korsotkuc massivdi jaryyaloo
        for (int j=0;j<m;j++)
        {
            cout<<i<<" "<<j<<" San ber  : ";
            cin>>b;
            a[i][j]=b;
        }
    }
    
    for (int i=0;i<n;i++) // ekranga chygaruu
    {
        for(int j=0;j<m;j++)
            cout<<" "<<a[i][j];
        cout<<endl;
    }
    
    
for (int i=0;i<n;i++)  // ochuruu
   delete [] a[i];
 delete [] a;
 
return 0;
}