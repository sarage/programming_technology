#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void funk(char simb, char *sens);

int main()
{
    char simb, sens[80];
    cin>>simb;
    cout<<endl;
    strcpy(sens,"abcdefgehjtik");
    funk(simb, sens);
    return 0;
}

void funk(char simb, char *sens)
{
    int e=0;
    while(*sens)
    {
        if ((simb==*sens) && (e==0))
        {        
            cout<<" ";
            e=1;
        }
        else 
            cout<<*sens;
        sens++;
    }
    cout<<endl;
}