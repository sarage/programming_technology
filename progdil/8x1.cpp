#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k,i;
    string str,l;
    getline(cin,str);
    l="";
    k=str.size();
    for (i=0;i<k;i++)
    {
        if ((int(str[i])>=48)&&(int(str[i])<=57))
        {
            l=l+" ";
        }
        else if ((int(str[i])>=65)&&(int(str[i])<=90))
        {
            l=l+char(int(str[i])+32);
        }
        else if ((int(str[i])>=97)&&(int(str[i])<=122))
        {
            l=l+char(int(str[i])-32);
        }
        else
        {
            l=l+str[i];
        }
    }
    cout<<l<<endl;
    return 0;
}
        