#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string l,m,n,p,kl,l1,m1,n1,p1;
    int w=0,t,t1,t2,t3,max,i,l2,m2,n2,p2,l3,m3,n3,p3,l4,m4,n4,p4;
    ifstream mfile("intel.txt");
    ofstream mfile1("outtel.txt");
    if (!mfile)
    {
        cout<< "Error opening output file" << endl;
        return -1;
    } 
while (!mfile.eof())
{
    w++;
    getline(mfile,kl);
    if (w==1)
        l=kl;
    else if (w==2)
        m=kl;
    else if (w==3)
        n=kl;
    else if (w==4)
        p=kl;
}
t=l.length();
t1=m.length();
t2=n.length();
t3=p.length();
    for (i=0;i<t;i++)
    {
        l1=l.at(i);
        if ((l1!="+") || (l1!="-") || (l1!=")") || (l1!="("))
                m1=m1+l1;
        cout<<i<<"  "<<l1<<endl;
    }
cout<<m1<<endl;;
mfile1.close();
return 0;
}
