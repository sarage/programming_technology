#include <iostream>
#include <string>
#include <sstream>
using namespace std;       
string DelFirst(string text)
{   string l,r;
    int c = text.size();
    l=text[0];
    for (int i=0;i<c;i++)
    {
        if(text[i]!=text[0])
            r=r+text[i];
    }
    return r;
}
int main ()
{
    string x;
    getline(cin,x);
    cout<<DelFirst(x);
    return 0;
}


    