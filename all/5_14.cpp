#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int* a=new int[n];
    int* b=new int[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i]*a[i];
    }
    for (i=0;i<n;i++)
    {  cout<<b[i]<<endl;}
    return 0;
}
