#include <iostream> 
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n,i=0,c,r,f;
    string h,p,l,b,d,k;
    cin>>n;
    cin>>l;
    c=l.size();
    getline(cin, d);
    k=d;
    f=d.size();
    while (i<n)
    {
        p=d.erase(c,f-c);
        if (l==p)
        {
            k.erase(0,c);
            d=k;
            i=i+1;
        }
        if (l!=p)
        {
            h=k;
            k.erase(0,1);
            r=k.size();
            h.erase(1,r);
            b=b+h;
            d=k;
        }
    }
    b=b+d;
    cout<<b<<endl;
    return 0;
}