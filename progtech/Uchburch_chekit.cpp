#include <iostream>
#include <fstream>
using namespace std;
int main()
{   int x,y,x1,y1,x2,y2,x3,y3,q,q1,q2,q3,q4,q5,y4,y5,y6,q6,q7,q8;
    ifstream xin("in.txt");
    ofstream xout("out.txt");
    xin>>x>>y;
    xin>>x1>>y1;
    xin>>x2>>y2;
    xin>>x3>>y3;
    q=x2-x1;
    q1=x3-x2;
    q2=x3-x1;
    q6=y2-y1;
    q7=y3-y2;
    q8=y3-y1;
    q3=(x-x1)*q6+y1*q;
    q4=(x-x2)*q7+y2*q1;
    q5=(x-x1)*q8+y1*q2;
    if (q==0)
    y4=0;
    else if (q6==0)
        y4=q+y1;
    else 
    y4=q3/q;
        if (q1==0)        
    y5=0;
    else if (q7==0)
        y5=q1+y2;
    else
    y5=q4/q1;
        if (q2==0)
    y6=0;
    else if (q8==0)
            y6=q2+y1;
    else
        y6=q5/q2;
    if ((y4>=y) && (y5>=y) && (y6<=y) || (y4>=y) && (y5<=y) && (y6>=y) || (y4<=y) && (y5>=y) && (y6>=y))
        xout<<"YES";
    else 
        xout<<"NO";
    cout<<y4<<" "<<y5<<" "<<y6<<endl;
    xin.close();
    xout.close();
    return 0;
}