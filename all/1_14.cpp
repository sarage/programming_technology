# include <iostream>
# include <string>
using namespace std;
int main()
{
   string a,b,e;
    int c,d;
   cin>>a;
   cin>>b;
   c = a.size() - 1;
   d = b.size() - 1;
   e=a.at(c);
    cout<<e<<endl;
    if (a.at(c)==b.at(d))
    {
        cout<<"Yes"<<endl;  
    }
    else 
    {
     cout<<"No"<<endl;   
    }
   return 0;
}