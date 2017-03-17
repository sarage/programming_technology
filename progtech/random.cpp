#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    int i,k=0,m,o=0,p=1,q,n,a[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26},b[26];
    ofstream myfile("kurstukish.txt");
    for (i=1; i<27;i++)
    {
        srand(time(NULL));
        b[i]=(rand() % 26) + 1;
    }
    while (k<26)
    {
        w: for (m=p;m<27;m++)
        {
            for (n=m+1;n<27;n++)
            {
                if (b[m]==b[n])
                {
                    b[o]=(rand() % 26) + 1;
                    if (b[n]!=b[o])
                    {
                        b[n]=b[o];
                        k++;
                        p=1;
                        goto w;
                    }
                    
                }
            }   
        }
    }
    for (q=1; q<27;q++)
    {
        myfile<<a[q-1]<<"   "<<b[q]<<endl;
    }
    return 0;
}

    