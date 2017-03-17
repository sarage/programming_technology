#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{     int i,s;
      string r,str,d;
  ifstream myFile("123.txt");
   while (! myFile.eof())
   {
    getline(myFile, str);
    s=str.size();
	for (i=s-1;i>=0;i--)
    {
        d=str[i];
        r=r+d;
    }
  }
  if(str==r)
      cout<<"YES"<<endl;
  else
      cout<<"NO"<<endl;
  myFile.close();
  return 0;
}
