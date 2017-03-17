#include <iostream>
#include <string>
using namespace std;
int main()
{
    int k,k1,i,j,p,z,l;
    string str,str1;
    getline(cin,str);
    getline(cin,str1);
    k=str.size();
    k1=str1.size();
    p=0;
    for (i=0;i<k;i++)
    {
        if (str[i]==str1[0])
        {
            l=0;
            z=0;
            for (j=i;j<(i+k1);j++)
            {
                if (str[j]==str1[l])
                {
                    l++;
                }
            }
            if (l==k1)
            {
                cout<<(i+1)<<endl;
            }
        }
    }
    return 0;
}