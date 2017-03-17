#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main()
{   int a,c,i,j,k=0,s=0,d,o,r,g,l,b;
    string str,str1;
    vector <string> vec;
    ifstream xin("input.txt");
    ofstream xout("output.txt");
    xin>>a;
    while (!xin.eof())
    {
        xin>>str;
        vec.push_back(str);
    }
    o=vec.size()-1;
    for (i=0;i<o;i++)
    {
        r=vec[i].size();
        if (r==a)
        {
            for (j=0;j<a;j++)
            {
                if (vec[i][j]=='0')
                    s++;
            }
            if (s==a)
                xout<<vec[i]<<endl;
            else
            {                
                for (j=0;j<a;j++)
                {
                    if (vec[i][j]=='1')
                        k=k+j+1;                    
                }
                g=k%(a+1);
                vec[i][g-1]='0';
                for (j=0;j<a;j++)
                xout<<vec[i][j];
            }
        }
        else if (r<a)
        {
            k=0;
            for (j=0;j<r;j++)
            {
                if (vec[i][j]=='1')
                k=k+j+1;
                g=k%(a+1);
                d=k/(a+1);
                c=((g+d)*(a+1))-k;
                if ((g==0) && (a+1<=k))
                    vec[i][r]='0';
                else if ((g!=0) && (a+1>k))
                    vec[i][a-k]='1';
                else if ((g!=0)&&(a+1<k))
                    vec[i][c]='1'; 
            }
            for (j=0;j<a;j++)
                xout<<vec[i][j];
            xout<<endl;
        }
        else if (r>a)
        {xout<<endl;
            for (j=0;j<r;j++)
            {
                k=0;
                l=0;
                str1="";
                for (b=0;b<r;b++)
                {
                    if (b!=j)
                    {
                        l++;
                        str1=str1+vec[i][b];
                        if (vec[i][b]=='1')
                            k=k+l;
                    }
                }
                g=k%(a+1);
                if (g==0)
                {
                    xout<<str1;
                    break;
                }
            }
        }
    }
    xin.close();
    xout.close();
    return 0;
}