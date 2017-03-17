#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{     int i,s;
      string r,str,d;
  ifstream myFile("abc.txt");
   while (! myFile.eof())
   {
    getline(myFile, str);
    s=str.size();
	for (i=s;i>=0;i--)
    {
        d=str[i];
        r=r+d;
    }
     my << r << endl;
   }
  }
  myFile.close();
  return 0;
}
