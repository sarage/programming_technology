#include <iostream>
#include <math>
using namespace std;
int main(){
int n;
float s;
cin>>n;
for(int i=n;i>=1;i=i-2){
float t=pow(i+2,-1);
s=i+t;
}
cout<<"s= "<<s<<endl;
return 0;
}