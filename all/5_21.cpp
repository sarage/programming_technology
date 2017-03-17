#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<endl;
    int first=1,y=0,t;
    for (int i=0;i<n;i++){
        t=y+first;
        first=y;
        y=t;
        cout<<t<<endl;
    }
    return 0;
}