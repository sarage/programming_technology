#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[10],x;
    vector <int> vec;
    cin>>x;
    cout<<endl;
    for (int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<endl;
    int t=0;
    for(int i=0;i<10;i++){
        for(int j=1;j<arr[i];j++){
            if(arr[i]%j==0)
                t=t+j;
        }
        if(t==x){
            vec.push_back(arr[i]);
        }
        t=0;
    }  
    int u=vec.size();
    for (int i=0;i<u;i++){
        cout<<vec[i];
    }    
    return 0;
}