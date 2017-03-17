#include <iostream>
#include <string>
using namespace std;

char rec(string str,int a);
int main()
{
    int k;
    string str;
    cin>>str;
    k=str.size();
    rec(str,k);
    return 0;
}
char rec (string str,int a)
{
    if (a>0)
    {
        a--;
        cout<<str[a];
        rec(str,a);
    }
    else
    {
        return 0;
    }
}