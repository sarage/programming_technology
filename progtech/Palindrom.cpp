#include <iostream>
#include <string>
#include <stdlib.h> 
#include <sstream>
using namespace std;
int main()
{
    string n,m;
    int i,e,k=0,p,p1,p2;
    cin>>n;
    l: 
    e=n.size();
    for (i=e-1;i>-1;i--)
    {
        m=m+n[i];
    }
    if (k<100)
    {
        if (m==n)
            cout<<k<<endl;
        else
        {
            p = atoi(n.c_str());
            p1=atoi(m.c_str());
            p2=p+p1;
            ostringstream convert;
            convert << p2;
            n = convert.str();
            k++;
            m="";
            goto l;
        }
    }
    else 
        cout<<0<<endl;
    return 0;
}