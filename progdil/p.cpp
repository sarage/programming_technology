#include <iostream>
using namespace std;
int main()
{
    double x,y;
    int *p;
    x=124.45;
    p=(int *)&x;
    y=*p;
    cout<<y<<endl;
    return 0;
}