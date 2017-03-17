#include <iostream> 
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int n,i,a,c,f;
    string l,d,k;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        a=i*i;
        ostringstream convert;
        convert << a;
        l = convert.str();        
        c = l.size();
        if (i<10)
        {
            f=c-1;
            l.erase(0,f);
            ostringstream convert;
            convert << i;
            k = convert.str();
            if (k==l)
            {
                cout<<k<<endl;
            }
        }
        if(i>10 && i<100)
        {
            f=c-2;
            l.erase(0,f);
            ostringstream convert;
            convert << i;
            k = convert.str();
            if (k==l)
            {
                cout<<k<<endl;
            }
        }
        if(i>100 && i<1000)
        {
            f=c-3;
            l.erase(0,f);
            ostringstream convert;
            convert << i;
            k = convert.str();
            if (k==l)
            {
                cout<<k<<endl;
            }
        }
    }
    return 0;
}