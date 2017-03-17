#include <iostream>
using namespace std;
void func()
{
    try
    {
        throw "Salam";
    }
catch (char *ch)
{
    cout<<"Func ichinde\n";
    throw;
}
catch (int n)
{
    cout<<"Func icinde2\n";
    throw;
}
}

int main()
{
    cout<<"Bashy\n";
    try
    {
        func();
    }
    catch(char *ch)
    {
        cout<<"Main ichinde\n";
    }
    catch (int n)
    {
        cout<<"Main ichinde2\n";
    }
    cout<<"ayagy\n";
    return 0;
}