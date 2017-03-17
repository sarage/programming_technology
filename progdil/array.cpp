#include <iostream>
using namespace std;
int main()
{
    int arr[10],i,min,max,p,p1,flag;
    for (i=0;i<10;i++)
    {
        arr[i]=1+rand()%3;
    }
    for (i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    max=arr[0];
    min=arr[0];
    p=0;
    p1=0;
    for (i=0;i<10;i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
            p=i;
        }
        if (max<=arr[i])
        {
            max=arr[i];
            p1=i;
        }
    }
    cout<<endl;
    cout<<endl;
    flag=arr[p];
arr[p]=arr[p1];
arr[p1]=flag;
    for (i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}