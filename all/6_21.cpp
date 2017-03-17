#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,3,0,7,3,9,0};
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++)
        if(arr[i]>arr[j]){
            int y=arr[i];
            arr[i]=arr[j];
            arr[j]=y;
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int u=arr[4],o=0;
    for(int i=0;i<10;i++){
        if(arr[i]==u)
            o++;
    }
    cout<<o<<endl;
    return 0;
}