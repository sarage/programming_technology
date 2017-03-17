#include <iostream>
#include <stdio.h>
#include <fstream>
#include <string>
#include <stdlib.h> 
using namespace std;
int main()
{
    char kl[10];
    string s;
    int b,i=0,arr[1000],kll;
    b=s.size();
    kl[10]=kl[b];
    ifstream my("inputlift.txt");
    if (!my)
    {
        cout<< "Error opening output file" << endl;
        return -1;
    }
while (!my.eof())
{
    my>>kl;
    i++;
    kll=atoi(kl);
    arr[i]=kll;
    cout<<arr[i]<<endl;
}return 0;
}
