// prog dil lab 2 var 5
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
    string str1,str2,str3,t1,t2,t3;
    int a,b,c,d,e,f;
    cout<<"1.comp processor";
    cin>>str1;
    cout<<"\n1.comp jywtygy";
    cin>>a;
    cout<<"\n1.comp esi";
    cin>>b;
    cout<<"\n1.comp tibi";
    cin>>t1;
    cout<<"\n2.comp processor";
    cin>>str2;
    cout<<"\n2.comp jywtygy";
    cin>>c;
    cout<<"\n2.comp esi";
    cin>>d;
    cout<<"\n2.comp tibi";
    cin>>t2;
    cout<<"\n3.comp processor";
    cin>>str3;
    cout<<"\n3.comp jywtygy";
    cin>>e;
    cout<<"\n3.comp esi";
    cin>>f;
    cout<<"\n3.comp tibi";
    cin>>t3;
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|ПЭЭМдин муноздомолору                                       |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|Процессор         |Жыштыгы (Mgz)     |RAM (Mb)     |Тиби    |";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<str1<<"|"<<setw(18)<<a<<left<<"|"<<setw(13)<<b<<left<<"|"<<setw(8)<<t1<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<str2<<"|"<<setw(18)<<c<<left<<"|"<<setw(13)<<d<<left<<"|"<<setw(8)<<t2<<left<<"|";
    cout<<"\n|------------------|------------------|-------------|--------|";
    cout<<"\n|"<<setw(18)<<left<<str3<<"|"<<setw(18)<<e<<left<<"|"<<setw(13)<<f<<left<<"|"<<setw(8)<<t3<<left<<"|";
    cout<<"\n|------------------------------------------------------------|";
    cout<<"\n|Тип:C - CISC-процессору, R - RISC-процессору                |";
    cout<<"\n|------------------------------------------------------------|"<<endl;    
    return 0;}