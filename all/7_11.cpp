#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    int arr[3][4],max,min;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
        cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        max=arr[i][0];
        for(int j=0;j<4;j++){
            if(max<=arr[i][j])
                max=arr[i][j];
        }
        vec.push_back(max);
    }
    min=vec[0];
    for(int i=0;i<3;i++){
        if(min>vec[i])
            min=vec[i];
    }
    cout<<min<<endl;
    return 0;
}