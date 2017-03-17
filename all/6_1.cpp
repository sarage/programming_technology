#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,0},arr1[10]={0,1,2,9,7,5,6,3,4,8};
    //int arr[10]={1,2,3,4,5,6,9,8,9,0},arr1[10]={0,14,8,9,7,5,6,3,4,2};
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    for(int i=0;i<10;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    int k,i,j,o=0;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(arr[i]!=arr1[j]){
                k=0;
                continue;
            }
            else{
                k=1;
                break;
            }
        }
        if(k==0)
            o++;
    }
    if(o!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}