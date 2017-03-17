#include <iostream>
using namespace std;
int main(){
	char str[20];
    int s=0;
	for(int i=0;i<20;i++){
        cin>>str[i];
    }
    cout<<endl;
    for (int i=0;i<20;i++){
        if(isdigit(str[i])){
            s=s+((int)str[i]-48);
            cout<<s<<" "<<str[i]<<endl;
        }
	}
	cout<<"s= "<<s<<endl;
    return 0;
}