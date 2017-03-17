#include <time.h>
#include <iostream>
using namespace std;
double factr(int );
int main()
{
    clock_t start, end;
    double duration,sum=1;
    int a;
    cin>>a;
    start = clock();
    cout<<factr(a)<<endl;
    end = clock();
    duration = ((double)( end - start )) / CLOCKS_PER_SEC;
    cout << duration << " seconds" << endl;
    return 0;
}
 double factr(int a)
{
if (a<= 1) 
    return 1; 
else 
    return a * factr(a - 1);
}