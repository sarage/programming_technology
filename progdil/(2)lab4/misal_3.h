#include <iostream>
#include <iomanip>
using namespace std;
class misal3
{
    public:
    int k;
    void print();
};

void misal3::print()
{
    switch(k)
            {
                case 1:
                {
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<"\n|"<<setw(18)<<left<<"Pentium-III"<<"|"<<setw(18)<<233<<left<<"|"
                    <<setw(13)<<" "<<left<<"|"<<setw(8)<<'C'<<left<<"|";
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<endl;
                }
                break;
                case 2:
                {
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<"\n|"<<setw(18)<<left<<"AMD-Ê6"<<"|"<<setw(18)<<166<<left<<"|"<<
                    setw(13)<<" "<<left<<"|"<<setw(8)<<'C'<<left<<"|";
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<endl;
                }
                break;
                case 3:
                {
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<"\n|"<<setw(18)<<left<<"PowerPC-620"<<"|"<<setw(18)<<2000<<left<<"|"
                    <<setw(13)<<" "<<left<<"|"<<setw(8)<<'R'<<left<<"|";
                    cout<<"\n|------------------|------------------|-------------|--------|";
                    cout<<endl;
                }
                break;
            }
}            
