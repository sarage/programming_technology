#include <iostream>
using namespace std;
int main(){
    int n,sum=0,t=0;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int y=i;
     while(y != 0){
        sum = sum + (y % 10);
        y/=10;
}
	if(i%sum==0){
		t++;
	}
	sum=0;
	}
    cout<<"t= "<<t<<endl;
}
