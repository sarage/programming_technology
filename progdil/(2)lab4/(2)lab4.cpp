#include <iostream>
#include <iomanip>
#include "misal_1.h"
#include "misal_2.h"
#include "misal_3.h"
#include "misal_4.h"
#include <string>
using namespace std;
int main()
{
    misal1 ob;
    misal2 ob2;
    misal3 ob3;
    misal4 ob4;
    string name;
    int n,frequency;
    char type;
    cout<<"Choose which operation you want..."<<endl;
    cout<<"Click 1 -4 number"<<endl;
    cout<<"1 - Add a row to the table."<<endl;
    cout<<"2 - Remove the specified string."<<endl;
    cout<<"3 - Print the specified string to the screen."<<endl;
    cout<<"4 - Print a table of the screen."<<endl;
    cin>>n;
    switch(n)
    {
        case 1: 
        {
            cout<<"Add a row to the table."<<endl;
            cout<<"CPU name:";
            cin>>name;
            ob.cpu=name;
            cout<<"Frequency:";
            cin>>frequency;
            ob.frequency=frequency;
            cout<<"Type:";
            cin>>type;
            ob.type=type;
            cout<<"\n|------------------------------------------------------------|";
            cout<<"\n|ПЭЭМдин муноздомолору                                       |";
            cout<<"\n|------------------|------------------|-------------|--------|";
            cout<<"\n|Процессор         |Жыштыгы (Mgz)     |RAM (Mb)     |Тиби    |";
            cout<<"\n|------------------|------------------|-------------|--------|";
            cout<<"\n|"<<setw(18)<<left<<"Pentium-III"<<"|"<<setw(18)<<233<<left<<"|"<<setw(13)
            <<" "<<left<<"|"<<setw(8)<<'C'<<left<<"|";
            cout<<"\n|------------------|------------------|-------------|--------|";
            cout<<"\n|"<<setw(18)<<left<<"AMD-К6"<<"|"<<setw(18)<<166<<left<<"|"<<setw(13)<<" "
            <<left<<"|"<<setw(8)<<'C'<<left<<"|";
            cout<<"\n|------------------|------------------|-------------|--------|";
            cout<<"\n|"<<setw(18)<<left<<"PowerPC-620"<<"|"<<setw(18)<<2000<<left<<"|"<<setw(13)
            <<" "<<left<<"|"<<setw(8)<<'R'<<left<<"|";
            cout<<"\n|------------------|------------------|-------------|--------|";
            cout<<"\n|"<<setw(18)<<left<<ob.getName()<<"|"<<setw(18)<<ob.getFrequency()<<left
            <<"|"<<setw(13)<<" "<<left<<"|"<<setw(8)<<ob.getType()<<left<<"|";
            cout<<"\n|------------------------------------------------------------|";
            cout<<"\n|Тип:C - CISC-процессору, R - RISC-процессору                |";
            cout<<"\n|------------------------------------------------------------|"<<endl;   
        }
        break;
        case 2: 
        {
            int k;
            cout<<"Remove the specified string."<<endl;
            cout<<"Which string you want removed?"<<endl;
            cin>>k;
            ob2.k=k;
            ob2.print();
        }
        break;
        case 3: 
        {
            int k;
            cout<<"Print the specified string to the screen."<<endl;
            cout<<"Which string you want print?"<<endl;
            cin>>k;
            ob3.k=k;
            ob3.print();
        }
        break;
        case 4: 
        {
            cout<<"Print a table of the screen."<<endl;
            ob4.print();
        }
        break;
        
    }
    return 0;
}