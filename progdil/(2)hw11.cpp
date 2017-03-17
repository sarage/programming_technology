#include <iostream>
using namespace std;
class samp 
{
    int i,j;
    public:
        void set (int a,int b)
    {
        i=a;
        j=b;
        cout<<i<<" "<<j<<" ";
    }
    int get()
    {
        return i+j;
    }
};

int main()
{
    samp *p;
    int i;
    p=new samp[5];
    for (i=0;i<5;i++)
    {
        p->set(i,i);
        cout<<p->get();
        cout<<endl;
    }
    delete []p;
    return 0;
}