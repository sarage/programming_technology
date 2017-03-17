#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
void f(char *sap);
int main()
{
    char s[80];
    strcpy(s,"Alisher");
    f(s);
    cout<<s;
    cout<<endl;
    return 0;
}

void f(char *sap)
{
    while (*sap)
    {
        *sap=toupper(*sap);
        sap++;
    }
}