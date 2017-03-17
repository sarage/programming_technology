#include <iostream>
#include <string>
#include <sstream>
using namespace std;       
string mean(string text)
{   string l;
    int c,i,s=0,y,t;
    c = text.size();
        
    for (i=0;i<c;i++)
    {
        t=(int)text[i];
        s=s+t;
    }
    y=s/c;
    ostringstream convert;
    convert << y;
    l = convert.str();
           return l;
}
int main ()
{   int i,p;
    string x,r,d,f;
    getline(cin,x);
    p = x.size();
    for (i=0;i<p;i++)
    {   
        d=x[i];
        if (d!=" ")
        {
            r=r+d;
        }
        if (i==p-1 || d==" ")
        {
            f=r;
            r=" ";
            cout <<mean(f)<< endl;
        }
    }
    return 0;
}


    