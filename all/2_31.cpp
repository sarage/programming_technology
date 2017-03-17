#include <iostream>
#include <cmath>
using namespace std;
int main(){
float a, b, E;
cin>>a;
cin>>b;
cin>>E;
a=(a+b)/2.0;
b=sqrt(a*b);
float y=abs(a-b);
while(y>=E){
float c=(a+b)/2.0;
float d=sqrt(a*b);
float y=abs(c-d);
a=c;
b=d;}
cout<<"a= "<<a<<endl;
cout<<"b= "<<b<<endl;
return 0;
}