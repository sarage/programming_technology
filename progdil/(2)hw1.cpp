#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#define n 5
struct univer_data
    { 
        string name;
        string department;
    };
        struct home_data
        {
            string town;
            string street;
            int number;
            int telephone_number;
            univer_data data;
        }
    students[n];
int main(){
    int i,a;
    for (i=0;i<5;i++)
    {
        a=i+1;
        
        cout<<a<<".student's name\n";
        cin>>students[i].data.name;
        
        cout<<a<<".student's department\n";
        cin>>students[i].data.department;
        
        cout<<a<<".student's town\n";
        cin>>students[i].town;
        
        cout<<a<<".student's street's name\n";
        cin>>students[i].street;
        
        cout<<a<<".student's number of adress\n";
        cin>>students[i].number;
        
        cout<<a<<".student's telephone number\n";
        cin>>students[i].telephone_number;
    } 
    cout<<"\n|---------------------------------------------------------------------------------------------------------------|";
    cout<<"\n|                                      Information about students                                               |";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";
    cout<<"\n|          Name            |     Department   |     Town      |        Street        |     Telephone number     |";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";
    cout<<"\n|"<<setw(26)<<left<<students[0].data.name<<"|"<<setw(18)<<students[0].data.department<<left<<"|"<<setw(15)<<students[0].town<<left<<"|"<<setw(15)<<students[0].street<<left<<"  "<<setw(5)<<students[0].number<<left<<"|"<<setw(26)<<students[0].telephone_number<<left<<"|";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";
    cout<<"\n|"<<setw(26)<<left<<students[1].data.name<<"|"<<setw(18)<<students[1].data.department<<left<<"|"<<setw(15)<<students[1].town<<left<<"|"<<setw(15)<<students[1].street<<left<<"  "<<setw(5)<<students[1].number<<left<<"|"<<setw(26)<<students[1].telephone_number<<left<<"|";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";
    cout<<"\n|"<<setw(26)<<left<<students[2].data.name<<"|"<<setw(18)<<students[2].data.department<<left<<"|"<<setw(15)<<students[2].town<<left<<"|"<<setw(15)<<students[2].street<<left<<"  "<<setw(5)<<students[2].number<<left<<"|"<<setw(26)<<students[2].telephone_number<<left<<"|";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";    
    cout<<"\n|"<<setw(26)<<left<<students[3].data.name<<"|"<<setw(18)<<students[3].data.department<<left<<"|"<<setw(15)<<students[3].town<<left<<"|"<<setw(15)<<students[3].street<<left<<"  "<<setw(5)<<students[3].number<<left<<"|"<<setw(26)<<students[3].telephone_number<<left<<"|";
    cout<<"\n|--------------------------|------------------|---------------|----------------------|--------------------------|";    
    cout<<"\n|"<<setw(26)<<left<<students[4].data.name<<"|"<<setw(18)<<students[4].data.department<<left<<"|"<<setw(15)<<students[4].town<<left<<"|"<<setw(15)<<students[4].street<<left<<"  "<<setw(5)<<students[4].number<<left<<"|"<<setw(26)<<students[4].telephone_number<<left<<"|";
    cout<<"\n|---------------------------------------------------------------------------------------------------------------|";    
    cout<<endl;
    return 0;}
