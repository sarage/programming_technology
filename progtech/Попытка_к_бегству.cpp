#include <iostream>
using namespace std;
int main (){
    int i,j,m,n;
    cin>>m;
    cin>>n;
    int* a=new int[m][n];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<a[i][j]<<endl;
    return 0;
}