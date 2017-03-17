#include <fstream>
#include <string>
#include <iostream>
#include <stdlib.h> 
using namespace std;

int main()
{     int i,s,k,k1,k2,k3;
      string r,str,d,d1,d2;
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
	for (i=0;i>s;i++)
    {
        d=str[i];
        d1=str[i+1];
        k = atoi(d.c_str());
        k1=atoi(d1.c_str());
        k2=k+k1;
        d2=str[i+2];
        k3=atoi(d2.c_str());
        if(k3>k2)
        {
            d2=" ";
        }
    }
     
   }
  }
  cout<<str<<endl;
  myFile.close();
  return 0;
}
