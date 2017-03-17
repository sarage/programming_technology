#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char suylom[80];
    gets(suylom);
    int i,s=0,p=0,o;
    for (i=0;i<strlen(suylom);i++)
    {
        if ((suylom[i]=='!') || (suylom[i]=='?') || (suylom[i]=='.'))
        {
            s=s+1;
        }
        else if ((suylom[i]==',') || (suylom[i]==':') || (suylom[i]==' ')|| ((suylom[i]==';')))
        {
            p=p+1;
        }
    }
    o=p+1;
    cout<<"suylom="<<s<<endl;
    cout<<"soz="<<o<<endl;
    return 0;
}