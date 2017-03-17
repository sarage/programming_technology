#include <iostream.h>
	class misal{
	public:
	  int i, j, k;
	  misal (int x,int y,int z){i=x; j=y; k=z;}
	friend ostream& operator << (ostream &stream, misal ob);
	friend istream& operator >> (istream &stream, misal &ob);
	};
	ostream &operator <<(ostream &stream, misal ob)
	{
	  stream << ob.i << ", ";
	  stream << ob.j << ", ";
	  stream << ob.k << "\n";
	  return stream;
	};
	istream &operator >> (istream &stream, misal &ob)
	{
	  cout << " i,j,k маанилерин киргизгиле: ";
	  stream >> ob.i >> ob.j >> ob.k;
	  return stream;
	}
	main(void)
	{
	  misal a(1,2,3);
	  cout << a;
	  cin >> a;
	  cout << a;
	  return 0;
	}
