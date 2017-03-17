#include <iostream>
using namespace std;
int main()
{
    int i,n,j,max;
    cin>>n;
    int* a=new int[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        max=a[0];
        if (a[0]<a[i])
        {
            max=a[i];
        }
    }
    int* b=new int[max];
    for (j=0;j<max;j++)
    {    cin>>b[j];}
    for (j=0;j<max;j++)
    {  cout<<b[j]<<endl;}
    return 0;
}
