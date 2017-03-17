#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
void f(char *sap);
int main()
{
    char a[80],s[80];
    cin>>a;
    strcpy(s,a);
    f(s);
    cout<<s;
    cout<<endl;
    return 0;
}

void f(char *sap)
{
    char *b=" ";
    while(*sap)
    {
        if (islower(*sap)) 
            *sap=toupper(*sap);
        else if (isupper(*sap)) 
            *sap=tolower(*sap);
        else if (isdigit(*sap)) 
            *sap=*b;
        sap++;
    }
}