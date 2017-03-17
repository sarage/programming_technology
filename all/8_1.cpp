#include <iostream>
#include <string>
using namespace std;       
string Double(string text)
{   string d;
    int c,i;
    c = text.size();
    for (i=0;i<c;i++)
    {
        d=d+text[i]+text[i];
    }
    return d;
        
}
int main ()
{   
    string x;
    getline(cin,x);
    cout <<Double(x)<< endl;
    return 0;
}


    