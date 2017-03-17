#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    double a,b;
    if (argc==2)
    {
    a=atof(argv[0]);
    b=atof(argv[1]);
    cout<<"a + b = "<<(a+b)<<endl;
    cout<<"a - b = "<<(a-b)<<endl;
    cout<<"a / b = "<<(a/b)<<endl;
    cout<<"a * b = "<<(a*b)<<endl;
    }
    return 0;
}    