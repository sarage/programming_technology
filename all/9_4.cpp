#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{     int i,s;
      string r,str,d;
  ifstream myFile("123.txt");

  if (! myFile)
  {
    cout << "Error opening output file" << endl;
    return -1;
  }
  else
  {
      
   while (! myFile.eof())
   {
    getline(myFile, str);
    s=str.size();
	for (i=s;i>0;i--)
    {
        d=str[i];
        r=r+d;
    }
     cout<<r<<endl; 
   }
  }
  myFile.close();
  return 0;
}
