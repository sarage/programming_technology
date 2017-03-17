//prog dil lab 1 a var 5
#include <iostream>
#include <math>
using namespace std;
int main(){
double a,b,x,t1,c,d,e,f;
    cout<<"a=";
cin>>a;
    cout<<"\nb=";
    cin>>b;
    cout<<"\nx=";
    cin>>x;
    c=a-b;
    d=a+x;
    e=1+x;
    f=b+x;
t1=(-1/pow(c,2))*(1/d+1/e)+(2/pow(c,3))*(log(d/f));
    cout<<"t1="<<t1<<endl;
return 0;}