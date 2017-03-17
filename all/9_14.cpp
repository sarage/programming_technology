#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{     int i,s,l,j,u,h=0;
      string r,str,d;
  ifstream myFile("257.txt");

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
	for (i=0;i>s;i=i+5)
    {
        if (i%2!=0)
        {l=5;}
        else{l=10;}
        for (j=0;j<l;j++)
        {
            d=str[j];
            if (d!="-")
            {
                r=r+d;
            }
            if (d=="-")
            {
                h=h+1;
            }
        }        
    }
    u=r.size();
    if (u==5)
    {
       cout<<"da"<<endl;
    }
    else if (h==5)
        cout<<"DA"<<endl;
   }
   else  
   {
        cout<<"NET"<<endl;
   }
  }
  myFile.close();
  return 0;
}
