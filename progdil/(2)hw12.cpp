#include <iostream>
using namespace std;
void swap1(int *a,int *b);
void swap2(int &c,int &d);
void swap3(int e,int f);

int main()
{
    int i,j;
    cout<<"Write two numbers:";
    cin>>i>>j;
    
    cout<<"Korsotkuch:";
    swap1(&i,&j);
    cout<<i<<" "<<j<<endl;
    cout<<"Shilteme:";
    swap2(i,j);
    cout<<i<<" "<<j<<endl;
    cout<<"Korsotkuch zhana shilteme koldonboy:";
    swap3(i,j);
    cout<<i<<" "<<j<<endl;
}

void swap1(int *a,int *b)
{
    int f;
    f=a;
    a=b;
    b=f;
    cout<<*a<<" "<<*b<<endl;
}

void swap2(int &c,int &d)
{
    int f;
    f=c;
    c=d;
    d=f;
    cout<<c<<" "<<d<<endl;
}

void swap3(int f,int e)
{
    int r;
    r=f;
    f=e;
    e=r;
    cout<<f<<" "<<e<<endl;
}