#include <iostream>
using namespace std;
namespace first
{
    class demo
    {
        int i;
        public:
            demo(int x)
        {
            i=x;
        }
        void seti(int x)
        {
            i=x;
        }
        int geti()
        {
            return i;
        }
    };
    char str[]= "misal\n";
    int k;
}

namespace second
{
    int x,y;
}

int main()
{
    int x,y;
    first::demo ob(5);
    cout<<ob.geti()<<endl;
    ob.seti(10);
    cout<<ob.geti()<<endl;
    using first :: str;
    cout<<str<<endl;
    using namespace first;
    k=3;
    cout<<k<<endl;
    second::x=10;
    second::y=20;
    cout<<x<<" "<<y<<endl;
    using namespace second;
    demo ob1(x),ob2(y);
    cout<<ob1.geti()<<" "<<ob2.geti()<<endl;
    return 0;
}

