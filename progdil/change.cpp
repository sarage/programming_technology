#include <iostream>
using namespace std;
void change(int *n,int *m);
int main()
{
    int a,b;
    cin>>a>>b;
cout<<"a="<<a<<" "<<"b="<<b<<endl;
    change(&a,&b);
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
    return 0;
}
void change(int *n,int *m)
{
    int *t;
    t=n;
    n=m;
    m=t;
    cout<<"n="<<*n<<" "<<"m="<<*m<<endl;
}