#include <iostream>
using namespace std;
class myclass
{
	int x, y;
public:
	myclass()
	{
		x = 0;
		y = 0;
	}
	myclass(int a, int b)
	{
		x = a;
		y = b;
	}
	void get(int &i, int &j)
	{
		i = x;
		j = y;
	}
	myclass operator+(myclass ob);
	myclass operator+(int i);
	myclass operator-(myclass ob);
	myclass operator-(int i);
	myclass operator*(myclass ob);
	myclass operator*(int i);
	myclass operator/(myclass ob);
	myclass operator/(int i);
};
myclass myclass :: operator+(myclass ob)
{
	myclass temp;
	temp.x = x + ob.x;
	temp.y = y + ob.y;
	return temp;
}
myclass myclass :: operator+(int i)
{
	myclass temp;
	temp.x = x + i;
	temp.y = y + i;
	return temp;
}
myclass myclass :: operator-(myclass ob)
{
	myclass temp;
	temp.x = x - ob.x;
	temp.y = y - ob.y;
	return temp;
}
myclass myclass :: operator-(int i)
{
	myclass temp;
	temp.x = x - i;
	temp.y = y - i;
	return temp;
}
myclass myclass :: operator*(myclass ob)
{
	myclass temp;
	temp.x = x * ob.x;
	temp.y = y * ob.y;
	return temp;
}
myclass myclass :: operator*(int i)
{
	myclass temp;
	temp.x = x * i;
	temp.y = y * i;
	return temp;
}
myclass myclass :: operator/(myclass ob)
{
	myclass temp;
	temp.x = x / ob.x;
	temp.y = y / ob.y;
	return temp;
}
myclass myclass :: operator/(int i)
{
	myclass temp;
	temp.x = x / i;
	temp.y = y / i;
	return temp;
}

int main()
{
	myclass ob1(10, 8), ob2(2, 2), ob3;
	int a, b;
	char n;
	cin >> n;
	cout << endl;
	switch (n)
	{
	case '+':
	{
				ob3 = ob1 + ob2;
				ob3.get(a, b);
				cout << "ob1+ob2= " << a << " " << b << endl;
				ob3 = ob1 + 100;
				ob3.get(a, b);
	};
		break;
	case '-':
	{
				ob3 = ob1 - ob2;
				ob3.get(a, b);
				cout << "ob1-ob2= " << a << " " << b << endl;
				ob3 = ob1 - 100;
				ob3.get(a, b);
	};
		break;
	case '*':
	{
				ob3 = ob1 * ob2;
				ob3.get(a, b);
				cout << "ob1*ob2= " << a << " " << b << endl;
				ob3 = ob1 * 100;
				ob3.get(a, b);
	};
		break;
	case '/':
	{
				ob3 = ob1 / ob2;
				ob3.get(a, b);
				cout << "ob1/ob2= " << a << " " << b << endl;
				ob3 = ob1 / 100;
				ob3.get(a, b);
	};
		break;
	}
	cout << a << " " << b << endl;
	system("pause");
}