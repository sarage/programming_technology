#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string a,r,c,d=",";
    int i,b;
    getline(cin,a);
    b=a.size();
    for (i=0;i<b;i++)
    {
        c=a.at(i);
        if (c==" ")
        {
            a.erase(i,1);
            a.insert(i,d);
        }
    }    
    cout<<a<<endl;
    return 0;
}
