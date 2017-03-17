#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    char k;
    double a,b;
    if (argc==4)
    {
    k=*argv[1];
    a=atof(*argv[2]);
    b=atof(*argv[3]);
    if (k=='+')
    {
        cout<<"a + b = "<<(a+b)<<endl;
    }
    if (k=='-')
    {
        cout<<"a - b = "<<(a-b)<<endl;
    }
    if (k=='/')
    {
        cout<<"a / b = "<<(a/b)<<endl;
    }
    if (k=='*')
    {
        cout<<"a * b = "<<(a*b)<<endl;
    }
    }
    return 0;
}    
