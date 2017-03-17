#include <iostream>
#include <string>
using namespace std;
char *sintaks[][2]={{"1","if (арифметикалык туюнтама) амал 1 else амал 2"},{"2","Label"},{"While","While(Туюнтма)"},{"Do...while","Do Амал While(Туюнтма)"},{"for i=...","for(туюнтма 1,туюнтма 2, туюнтма 3) серия"},{"Switch","Switch(Арифметикалык туюнтама){case турактуу 1:амал 1;break;case турактуу 2:амал 2;break;case турактуу n:амал n;break; }"}};
int main()
{
    char sap[80];
    cout<<"1. If"<<endl;
    cout<<"2.Goto"<<endl;
    
    cout<<"Tanda: ";
    int i;
    
    cin>>sap;
    for (i=0;*sintaks[i][0];i++)
    {
        if (!strcmp(sintaks[i][0],sap))
    {
        cout<<sintaks[i][1]<<endl;
        break;
    }    
    }
        return 0;
}