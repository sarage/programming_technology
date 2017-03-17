#include <iostream>
using namespace std;
int main(){
    int arr[10];
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if (arr[i]>arr[j]){
                int m=arr[i];
                arr[i]=arr[j];
                arr[j]=m;
            }
        }
    }    
    cout<<arr[2];
    return 0;
}