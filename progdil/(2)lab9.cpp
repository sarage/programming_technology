#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class table
{
	string name;
	int frequency;
	char type;
public:
	friend void setinfo(table ob);
	friend void showinfo(table ob);
}info[3];

void setinfo(table ob)
{
	for (int i = 0; i < 3; i++)
	{
		cout << "Write name:";
		cin >> info[i].name;
		cout << "Write frequency:";
		cin >> info[i].frequency;
		cout << "Write type:";
		cin >> info[i].type;
		cout << endl;
	}
}
void showinfo(table ob)
{
	cout << "\n|------------------------------------------------------------|";
	cout << "\n|������� �������������                                       |";
	cout << "\n|------------------|------------------|-------------|--------|";
	cout << "\n|���������         |������� (Mgz)     |RAM (Mb)     |����    |";
	cout << "\n|------------------|------------------|-------------|--------|";
	cout << "\n|" << setw(18) << left << info[0].name << "|" << setw(18) << 
    info[0].frequency << left << "|" << setw(13) << " " << left << "|" << setw(8)
    << info[0].type << left << "|";
	cout << "\n|------------------|------------------|-------------|--------|";
	cout << "\n|" << setw(18) << left << info[1].name << "|" << setw(18) <<
    info[1].frequency << left << "|" << setw(13) << " " << left << "|" << setw(8)
    << info[1].type << left << "|";
	cout << "\n|------------------|------------------|-------------|--------|";
	cout << "\n|" << setw(18) << left << info[2].name << "|" << setw(18) << 
    info[2].frequency << left << "|" << setw(13) << " " << left << "|" << setw(8) 
    << info[2].type << left << "|";
	cout << "\n|------------------------------------------------------------|";
	cout << "\n|���:C - CISC-����������, R - RISC-����������                |";
	cout << "\n|------------------------------------------------------------|" << endl;
}
int main()
{
	table ob;
	setinfo(ob);
	showinfo(ob);
	return 0;
}