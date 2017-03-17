#include <ñtime>
#include <iostream>
using namespace std;
int main()
{
    clock_t start, end;
    double duration,sum=1;
    int a;
    cin>>a;
    start = clock();
    for( int i=1; i <=a; i++ )
    {
            sum=sum*i; 
        cout <<sum << endl;
    }
    end = clock();
    duration = ((double)( end - start )) / 60000;
    cout << duration << " seconds" << endl;
    return 0;
}