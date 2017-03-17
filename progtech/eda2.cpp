#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <stdlib.h> 
using namespace std;
int main()
{
    string s,kl;
    int i,kll,w=0,a,l,ar[1000][4],j,z=0,z1=0,z2=0,z3=0;
    ifstream mfile("input.txt");
    ofstream mfile1("output.txt");
    if (!mfile)
    {
        cout<< "Error opening output file" << endl;
        return -1;
    }
l=0;
j=0;    
while (!mfile.eof())
{
    w++;
    if (w==1)
    {
        mfile>>kl;
        kll=atoi(kl.c_str());
        a=kll;
    }
    if (w!=1)
    {
        mfile>>kl;
        kll=atoi(kl.c_str());
        ar[1000][4]=ar[a][4];
        ar[l][j]=kll;
        j++;
    if (j==4)
    {
        j=0;
        l++;
    }
    }
}
for (j=0;j<4;j++)
{
    for (i=0;i<a;i++)
    {
        if (ar[i][j]==1) z++;
        if (ar[i][j]==2) z1++;
        if (ar[i][j]==3) z2++;
        if (ar[i][j]==4) z3++;
    }
    if ((z>=z1) && (z>=z2) && (z>=z3)) mfile1<<1<<" ";
    else if ((z1>=z) && (z1>=z2) && (z1>=z3)) mfile1<<2<<" ";
    else if ((z2>=z) && (z2>=z1) && (z2>=z3)) mfile1<<3<<" ";
    else if ((z3>=z) && (z3>=z2) && (z3>=z1)) mfile1<<4<<" ";   
    z=0;
    z1=0;
    z2=0;
    z3=0;
}
mfile1.close();
return 0;
}
