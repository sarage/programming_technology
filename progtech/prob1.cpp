#include <iostream>
#include <string>
using namespace std;
int main ()
{string text="abc";
    int s=0;
    int c=text.size();
for (int i=0;i<c;i++)
    {
        int t=(int)text[i];
        s=s+t;
        cout<<s<<" "<<t<<endl;
    }
    return 0;
}