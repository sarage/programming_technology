#include <iostream>
#include <conio.h>
using namespace std;
int todor=0;
struct Node 
{
   int x; 
   Node *l,*r;
};
void show(Node *&Tree) //������� ?�?? ���������
{
    if (Tree!=NULL)
    {
       show(Tree->l); //��� ���� ������� ������� ?�?� ���������?? ������� 
       cout<<Tree->x;//�������� ������� ���������
       cout << "  ";
       show(Tree->r); // �? ���� ������� ������� ?�?� ���������?? �������
    }
}
 
Node* add_node(int x,Node *&MyTree) //������� ���� ������� �������
{
    if (!MyTree)
    {
        MyTree= new Node;
        MyTree->x=x;
        MyTree->l=0;MyTree->r=0;
    }
    else
        if(x<MyTree->x)
            MyTree->l=add_node(x,MyTree->l);
        else
            MyTree->r=add_node(x,MyTree->r);
    return MyTree;
 
}
int DeleteTree(Node *Tree)
{
     if (Tree==NULL)
         return 0;
     else
     {
           DeleteTree(Tree->l);
           DeleteTree(Tree->r);
           delete Tree;
           Tree = NULL;
     }
}
int main()
{
  Node *Tree=NULL;  
  int k,e,z;
  cout << "�������� �������������� ����� �������?��\n";
  cin >> z;
  cout << "�������� ������������ �������?��\n";
      for (int i=0;i<z;i++) 
      {
          cin >> k;
          add_node(k,Tree);
      }
      cout << "������� �������?��\n";
      cin >> e;
      cout << "�����:\n";
      show(Tree);
      DeleteTree(Tree);
      getch();
   return 0;
}  

