#include <iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"chekittin koordinattaryn kirgiz"<<endl;
    cin>>x>>y;
    if ((x<=0) && (x>=-1) && (y<=0) && (y>=-1) || (y==1-x))
        cout<<"taandyk"<<endl;
    else
        cout<<"taandyk emes"<<endl;
    return 0;
}