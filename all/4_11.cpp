#include <iostream>
#include <string>
#include <tchar.h>
using namespace std;
int main(){
    int s=0;
	string str, str1,y;
    getline(cin,str);
    getline(cin,str1);
    int t=str.length();
    int b=str1.length();
	for(int i=0;i<t;i++){
        y.assign(str,i,b);
        int k=strcmp(y.c_str(),str1.c_str());
        if(k==0)
            s++;
    }
	cout<<"s= "<<s<<endl;
    return 0;
}