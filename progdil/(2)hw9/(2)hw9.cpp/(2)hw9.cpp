#include <iostream>
using namespace std;
class base
{
protected:
	int a, b;
};

class derived :private base
{
	int c;
public:
	void setab(int n, int m)
	{
		a = n;
		b = m;
	}
	void setc(int k)
	{
		c = k;
	}
	void showabc()
	{
		cout  << a<<" "<<b<<" "<<c<<endl;
	}
};

int main()
{
	derived ob;
	ob.setab(5, 10);
	ob.setc(15);
	ob.showabc();
	system("pause");
}