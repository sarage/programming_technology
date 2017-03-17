#include <iostream>
#include <string>
#include <sstream>
using namespace std;

union 
    { 
        char name[25];
        char model[15];
        char android_version[10];
        int cost;
    }    client,our1,our2,our3;
    
int main()
{    
    char ch;
    
    string name1, model1, android_version1,name2, model2, android_version2,name3, model3, android_version3,name4, model4, android_version4;
    
    name1=string(our1.name);
    model1=string(our1.model);
    android_version1=string(our1.android_version);
    
    name1="Sony";    
    model1="Xperia_Miro";
    android_version1="4.04";
    our1.cost=7500;
    
    name3=string(our2.name);
    model3=string(our2.model);
    android_version3=string(our2.android_version);
    
    name3="Samsung";
    model3="S4";
    android_version3="4.0";
    our2.cost=5000;
    
    name4=string(our3.name);
    model4=string(our3.model);
    android_version4=string(our3.android_version);
    
    name4="Nokia";
    model4="X2";
    android_version4="4.1";
    our3.cost=3500;
    
    do
    {
        
        cout<<"Telephone's name\n";
        cin>>client.name;
        name2=string(client.name);
        
        cout<<"Telephone's model\n";
        cin>>client.model;
        model2=string(client.model);
        
        cout<<"Telephone's android_version\n";
        cin>>client.android_version;
        android_version2=string(client.android_version);

        if ((name1==name2) && (model1==model2) &&(android_version1==android_version2))
        {
            cout<<endl<<name1<<endl
            <<model1<<endl
            <<android_version1<<endl
            <<our1.cost<<endl;
        }
        else if ((name3==name2) && (model3==model2) &&(android_version3==android_version2))
        {
            cout<<endl<<name3<<endl
            <<model3<<endl
            <<android_version3<<endl
            <<our2.cost<<endl;
        }
        else if ((name4==name2) && (model4==model2) &&(android_version4==android_version2))
        {
            cout<<endl<<name4<<endl
            <<model4<<endl
            <<android_version4<<endl
            <<our3.cost<<endl;
        }
        else 
            cout<<"\nWe have no this telephone.Sorry!!!"<<endl;
        
        cout<<"\nDo you want to continue? (Y/N)"<<endl;
        cin>>ch;
        cout<<endl;
        cout<<endl;
    } 
    while (ch!='n');
    cout<<endl;
return 0;
}