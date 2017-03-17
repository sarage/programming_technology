#include <iostream>
using namespace std;
int main()
{
    int n,a,s,i=-1,j=1,k=-1,arr[10];
    cin>>n;
    s=2;
    arr[10]=arr[n];
    if (n%2==0)
    a=n-1;
    else 
    a=n-2;
    for (i=2;i<a;i++)
    {
        for (j=1;j<n+1;j++)
        {
            arr[1]=j;
            arr[j+1]=j+i;
            if ((arr[j+1]<n+1) && (arr[j+1]>0))
            {
                arr[]
            }
            
        }
    }
    
return 0;
}
