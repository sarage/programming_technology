#include <iostream>
using namespace std;
int main()
{
    int i;
    float a,s=0;
    for (i=1;i<10;i++)
    {
        a=(pow(-1,i)*(i+1))/(pow(3,i)+pow(2,i));
        if (fabs(a)>=0.000001)
            s=s+a;
    }
    cout<<"s="<<s<<endl;
    return 0;
}