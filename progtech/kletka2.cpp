#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int i,c,a,b,arr[100][100],num,j,max=0,ki,km,s,r=0;
    vector <int> vec;
    ifstream myf("c.txt");
    c=0;
while (! myf.eof())
{
    c++;
    if (c==1){myf>>a;}
    if (c==2){myf>>b;}
    if(c>2)
    {
                myf>>num;
                vec.push_back(num);
    }
}
arr[100][100]=arr[a][b];
for (i=0;i<a;i++)
{
    for (j=0;j<b;j++)
    {
        arr[i][j]=vec[r];
        r++;
    }
}

for (i=0;i<a;i++)
{   s=0;
    for (j=0;j<b;j++)
    { 
        q:
        if (arr[i][j]==1)
        {
             arr[i][j]=2;
             s++;
    if (((i+1)<=a) && (arr[i+1][j]==1)) {
        i=i+1;
        goto q;}
    if (((j+1)<=b) && (arr[i][j+1]==1)) {j=j+1;
goto q;        }
    if (((j-1)>=-1) && (arr[i][j-1]==1)) {j=j-1;
        goto q;}
    if (((i-1)>=-1) && (arr[i-1][j]==1)) {i=i-1;
        goto q;}
            
            if (s>max)
            {
                max=s;
                ki=i;
                km=j;
            }
            
        }
    }
}
ki=ki+1;
km=km+1;
cout<<"max="<<max<<"  "<<"i="<<ki<<"  "<<"j="<<km<<"  "<<endl;
return 0;
}