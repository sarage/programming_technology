#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n,t=0;
	cin>>n;
	int o=sqrt(n);
	for(int i=0;i<=o;i++){
		for(int j=0;j<=o;j++){
			int y=pow(i,2);
			int x=pow(j,2);
			if((y+x)==n){
				t++;
			}
		}
	}
	cout<<"t= "<<t<<endl;
}
