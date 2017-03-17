#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> 
using namespace std;
int main()
{
    int j=0,i,m,n,k,v,c,r,d,t,h;
    string s,str3,e,arr[3];
    ifstream myfile1("inputlift.txt");
    ofstream myfile("outputlift.txt");
    if (!myfile)
    {
cout<< "Error opening output file" << endl;
return -1;
}
while (! myfile1.eof())
{
getline(myfile1,s);
}
int w=s.size();
for ( i=0;i<w;i++){
     str3.assign(s, i, 1);
    if (str3!=" "){
        e=e+str3;}
        else{j++;
            
        arr[j]=e;
            e="";}
            arr[j]=e;}
       m=atoi(arr[0].c_str());
           n=atoi(arr[1].c_str());
        k=atoi(arr[2].c_str());  
        v=0;
    i=0;
    h=m/k;
    if (m%k!=0)
        h=h+1;
    while ((v<n) &&(i<h))
    {
        v=i*k+1;
        i++;
    }
    if (v<n)
    {d=n-v;
        t=d*200;
        myfile<<t<<endl;}
    else{
    c=v-n;
    d=n-(v-k);
    r=c*100;
    t=d*200;
    if (r>t) {
        myfile<<t<<endl;}
        else{
    myfile <<r<< endl;
myfile.close();}}
return 0;
}
