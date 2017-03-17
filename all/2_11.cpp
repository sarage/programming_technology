#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n,pr=1;
    float sum=0,o;
    cin>>n;
    for(int i=1;i<=n;i++){
        pr=pr*i;
        o=pow(pr,-1);
        sum=sum+o;
    }
    double b = int(sum*100)/100.0;
    cout <<  b << endl;
    return 0;
}
