#include <iostream>
using namespace std;
class misal1
{
    public:
    string cpu;
    int frequency;
    char type;
    string getName();
    int getFrequency();
    char getType();
};

string misal1::getName()
{
    return cpu;
}
int misal1::getFrequency()
{
    return frequency;
}
 
char  misal1 ::getType()
{
    return type;
}