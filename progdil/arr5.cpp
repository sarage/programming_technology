#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    char name[3][18],tibi[3][8],jyshtygy[3][18],ram[3][13];
    int a,i;
    for (i=0;i<3;i++)
    {
        a=i+1;
        cout<<a<<".comp processor";
        cin>>name[i];
        cout<<a<<".comp jywtygy";
        cin>>jyshtygy[i];
        cout<<a<<".comp esi";
        cin>>ram[i];
        cout<<a<<".comp tibi";
        cin>>tibi[i]; 
    }
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|ПЭЭМдин муноздомолору                                       |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|Процессор         |Жыштыгы (Mgz)     |RAM (Mb)     |Тиби    |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<name[0]<<"|"<<setw(18)<<jyshtygy[0]<<left<<"|"<<setw(13)<<ram[0]<<left<<"|"<<setw(8)<<tibi[0]<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<name[1]<<"|"<<setw(18)<<jyshtygy[1]<<left<<"|"<<setw(13)<<ram[1]<<left<<"|"<<setw(8)<<tibi[1]<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<name[2]<<"|"<<setw(18)<<jyshtygy[2]<<left<<"|"<<setw(13)<<ram[2]<<left<<"|"<<setw(8)<<tibi[2]<<left<<"|";
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|Тип:C - CISC-процессору, R - RISC-процессору                |";
    cout<<"\n|------------------------------------------------------------|"<<endl;    
    return 0;}