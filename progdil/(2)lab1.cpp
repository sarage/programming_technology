#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;
#define n 3
class table
    { 
        string comp_processor;
        string comp_jyshtygy;
        int comp_memory;
        string comp_type;
    }
    computers[n];
int main(){
    string data;
    int i,a;
    for (i=0;i<3;i++)
    {
        a=i+1;
        cout<<a<<".comp processor\n";
        cin>>computers[i].comp_processor;
        cout<<a<<".comp jyshtygy\n";
        cin>>computers[i].comp_jyshtygy;
        cout<<a<<".comp esi\n";
        getline(cin,data);
        stringstream(data)>>computers[i].comp_memory;
        cout<<a<<".comp tibi\n";
        cin>>computers[i].comp_type;
    }
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|ПЭЭМдин муноздомолору                                       |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|Процессор         |Жыштыгы (Mgz)     |RAM (Mb)     |Тиби    |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<computers[0].comp_processor<<"|"<<setw(18)<<computers[0].comp_jyshtygy<<left<<"|"<<setw(13)<<computers[0].comp_memory<<left<<"|"<<setw(8)<<computers[0].comp_type<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<computers[1].comp_processor<<"|"<<setw(18)<<computers[1].comp_jyshtygy<<left<<"|"<<setw(13)<<computers[1].comp_memory<<left<<"|"<<setw(8)<<computers[1].comp_type<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<computers[2].comp_processor<<"|"<<setw(18)<<computers[2].comp_jyshtygy<<left<<"|"<<setw(13)<<computers[2].comp_memory<<left<<"|"<<setw(8)<<computers[2].comp_type<<left<<"|";
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|Тип:C - CISC-процессору, R - RISC-процессору                |";
    cout<<"\n|------------------------------------------------------------|"<<endl;    
    return 0;}