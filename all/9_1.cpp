#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{ vector <int> vec;
  ifstream myFile("123.txt");
   while (! myFile.eof())
   {
        int num;
        myFile>>num;
        vec.push_back(num);
    }
    int s=0,t=vec.size();
  for(int i=0;i<t;i++){
      s=s+vec[i];
  }
  cout<<s<<endl;
  myFile.close();
  return 0;
}
