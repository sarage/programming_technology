#include <iostream>
#include <string>
using namespace std;
char *sintaks[][2]={{"1","if (������������� ��������) ���� 1 else ���� 2"},{"2","Label"},{"While","While(�������)"},{"Do...while","Do ���� While(�������)"},{"for i=...","for(������� 1,������� 2, ������� 3) �����"},{"Switch","Switch(������������� ��������){case �������� 1:���� 1;break;case �������� 2:���� 2;break;case �������� n:���� n;break; }"}};
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