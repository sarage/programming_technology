#include <iostream>
using namespace std;
class simple
    {
        int i;
        public:
            simple(int a)
        {
            i=a;
            cout<<"Consturtor"<<endl;
        }
            ~simple()
        {
            cout<<"Destructor"<<endl;
        }
        int get_i()
        {
            return i;
        }
    };
    
    int kvadrat (simple ob)
    {
        return ob.get_i()*ob.get_i();
    }
    
    int main()
    {
        simple a(10);
        cout<<kvadrat(a)<<endl;
        return 0;
    }