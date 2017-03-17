#include <iostream>
using namespace std;
int main(){
    int y,k1,b1,k2,b2,x;
    cin>>k1>>k2>>b1>>b2;
    x=(b2-b1)/(k1-k2);
    y=k1*x+b1;
    cout<<"x="<<x<<" y="<<y<<endl;
    return 0;
}
