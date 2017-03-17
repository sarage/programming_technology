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
	void add_record();
	void showinfo();
}info[3];

void table::add_record()
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
void table::showinfo()
{
	cout << "\n|------------------------------------------------------------|";
	cout << "\n|ПЭЭМдин муноздомолору                                       |";
	cout << "\n|------------------|------------------|-------------|--------|";
	cout << "\n|Процессор         |Жыштыгы (Mgz)     |RAM (Mb)     |Тиби    |";
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
	cout << "\n|Тип:C - CISC-процессору, R - RISC-процессору                |";
	cout << "\n|------------------------------------------------------------|" << endl;
}
int main()
{
	table *p;
    p=new table;
	p->add_record();
	p->showinfo();
	return 0;
}