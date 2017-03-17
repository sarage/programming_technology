#include <iostream>
using namespace std;
int main(){
    int arr[3][3],arr1[3][3],arr2[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        cin>>arr1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr2[i][j]=arr[i][j]*arr1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}