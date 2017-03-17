#include <iostream>
#include <string>
using namespace std;       
string mean(string text)
{   string d,e;
    int c,i,t;
    c = text.size();
    for (i=0;i<c;i++)
    {
        t=(int)text[i];
        if (t>65 && t<122)
        {
            d=text[i];
            e=e+d;
        }
    }
    text=e;    
    return text;
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

    