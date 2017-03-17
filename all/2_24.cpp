#include <iostream>
using namespace std;
int main()
{
    int a,s=1,c=1,f,i=0;
    cin>>a;
    a: while (i<1000)
    {
        i++;
        f=s+c;
        s=c;
        c=f;
        if (a!=f)
        {
            goto a;
        }
        else 
        {
            cout<<"Yes"<<endl;
            goto end;
        }
    }
cout<<"NO"<<endl;    
end:
return    0;
}
