#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	string kl,skl,ch;
	int c,k;
	//char ch;
	ifstream mfile("input.txt");
	ofstream mfile1("output.txt");
	if (!mfile)
	{
		cout << "Error opening output file" << endl;
		return -1;
	}
	while (!mfile.eof())
	{
		mfile >> kl;
            skl=kl;
        c=skl.size();
            k=c/2;
    for(int i=0;i<c;i++)
        {
            ch=skl.at(i);
            if (i!=k)
                mfile1<<ch;
            else
                mfile1<<' '<<ch;
        }
        mfile1<<endl;
	}
	return 0;
}