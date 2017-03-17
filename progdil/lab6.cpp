#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,n;
    double x,y;
    cout<<"|   x   |     y     |\n";
    cout<<"|-------|-----------|\n";
    for (i=0;i<5;i++)
    {
        for (x=0;x<4;x+=0.25)
        {
            if (x<2)
                y=sqrt(1-(x-1)*(x-1));
            else if (x<3)
                y=sqrt(0.25-(x-2.5)*(x-2.5));
            else if (x<4)
                y=0;
          cout<<"|"<<setw(7)<<left<<x<<"|"<<setw(11)<<left<<y<<"|";
            n=(y+1)*10;
            if (y-1-n*10>0.5) n++;
                for (;n>0;n--)
                    cout<<" ";
                    cout<<"*\n";
                
        }
    }
    return 0;
}