//prog dil lab 1 b var 5
#include <iostream>
#include <math>
using namespace std;
int main (){
    float a,x,t2;
    cout<<"\na=";
    cin>>a;
    cout<<"\nx=";
    cin>>x;
    t2=(-1/(2*a))*((cos(a*x))/(pow(sin(a*x),2))-(log(tan(a*x/2))));
    cout<<"t2="<<t2<<endl;
    return 0;}
