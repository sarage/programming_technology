#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{     int i,s;
      string r,str,d,str1;
  ifstream myFile("123.txt");
  ifstream myFile1("321.txt");  
   while (! myFile1.eof())
   {
    getline(myFile1, str);
    s=str.size();
	for (i=s-1;i>=0;i--)
    {
        d=str[i];
        r=r+d;
    }
}
while (! myFile.eof())
   {
    getline(myFile, str1);
}
cout<<str1<<" "<<r<<endl;
  myFile.close();
  return 0;
}
