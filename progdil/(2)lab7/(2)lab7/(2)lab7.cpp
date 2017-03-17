#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int n, frequency, l = 0,p;
	string kl, name;
	char type;
	cout << "Choose which operation you want..." << endl;
	cout << "Click 1 -4 number" << endl;
	cout << "1 - Add a row to the table." << endl;
	cout << "2 - Remove the specified string." << endl;
	cout << "3 - Print the specified string to the screen." << endl;
	cout << "4 - Print a table of the screen." << endl;
	cin >> n;
	ifstream mfile("in_lab7.txt");
	ofstream mfile1("out_lab7.txt");
    ifstream mfile2("out_lab7.txt");
	ofstream mfile3("in_lab7.txt");
	if (!mfile)
	{
		cout << "Error opening output file" << endl;
		return -1;
	}
	switch (n)
	{
	case 1:
	{
			  cout << "Add a row to the table." << endl;
			  cout << "CPU name:";
			  cin >> name;
			  cout << "Frequency:";
			  cin >> frequency;
			  cout << "Type:";
			  cin >> type;
			  while (!mfile.eof())
			  {
				  mfile >> kl;
				  l++;
				  if (l != 12)
					  mfile1 << kl << endl;
				  else
					  mfile1 << "|" << setw(35) << left << name << "|" << setw(30) <<
                  frequency << left << "|" << setw(36) << " " << left << "|" << setw(8) 
                  << type << left << "|";
			  }
	}
		break;
	case 2:
	{
			  int k;
			  cout << "Remove the specified string." << endl;
			  cout << "Which string you want removed?" << endl;
			  cin >> k;
			  if (k == 1)
				  p = 6;
			  else if (k == 2)
				  p = 8;
			  else
				  p = 10;
			    while (!mfile.eof())
			  {
				  mfile >> kl;
				  l++;
				  if ((l == p-1) || (l==p))
					  continue;
				  else
					  mfile1 << kl << endl;
			  }
	}
		break;
	case 3:
	{
			  int k;
			  cout << "Print the specified string to the screen." << endl;
			  cout << "Which string you want print?" << endl;
			  cin >> k;
			  if (k == 1)
				  p = 6;
			  else if (k == 2)
				  p = 8;
			  else
				  p = 10;
			  while (!mfile.eof())
			  {
				  mfile >> kl;
				  l++;
				  if  (l == p)
					  mfile1 << kl << endl;
			  }
			  
	}
		break;
	case 4:
	{
			  cout << "Print a table of the screen." << endl;
			  while (!mfile.eof())
			  {
				  mfile >> kl;
				  mfile1 << kl << endl;
			  }
	}
		break;   
}
return 0;
}