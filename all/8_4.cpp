#include <iostream>
#include <string>
using namespace std;       
string MakeStr(char x,char y,int n)
{   string d;
    for (int i=0;i<n;i++)
    {
        if(i%2==0){
            for(int r=0;r<i;r++)
                d=d+x;
        }
        else{
            for(int r=0;r<i;r++)
                d=d+y;
        }
    }
    return d;
        
}
int main ()
{   
    char x,y;
    int n;
    cin>>x;
    cin>>y;
    cin>>n;
    cout <<MakeStr(x,y,n)<< endl;
    return 0;
}


    