#include <iostream>
using namespace std;
int main()
{
    int i,n,m,y;
    cin>>n;
    m=n;
    int* a=new int[n];
    int* b=new int[m];
    for (i=0;i<n;i++)
    {
        cin>>a[i];}
    for (i=0;i<n;i++)
    {        y=a[i]+a[i+1];
        b[i]=y/2;}
    for (i=0;i<n;i++)
    {  cout<<b[i]<<endl;}
    return 0;
}
