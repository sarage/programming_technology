#include <fstream>
#include <string>
#include <iostream>
using namespace std;
int main()
{     int i,s;
      string r,str;
  ifstream myFile("abc.txt");
  ofstream my("sky.txt");
   while (! myFile.eof())
   {
    getline(myFile, str);
    s=str.size();
	for (i=0;i<s;i++)
    {
        if(!isdigit(str[i]))
            r+=str[i];
        else{
            my << r << endl;
            r="";
        }
    }
   }
  myFile.close();
  return 0;
}
