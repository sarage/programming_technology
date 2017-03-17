#include <iostream> 
#include <stdlib.h> 
#include <string>
using namespace std;
int main()
{
    string a,c,d,e;
    int s,j,l,p;
    cin>>a;
    for(j=0;j<sizeof(a);j++)
    s=a.find(",");
   /* int q=b+1;
    int w=b+2;
    int z=b+3;
    c=a.at(q);
    d=a.at(w);
    e=a.at(z);
    s = atoi(c.c_str());
    j = atoi(d.c_str());
    l = atoi(e.c_str());
    p=s+j+l;
    cout<<p<<endl;*/
    cout<<s;
    return 0;
}

