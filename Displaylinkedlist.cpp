#include<iostream>
using namespace std;
struct Node
{
    int data;
     Node *next;
}*first=NULL;
 
void create(int a[],int n)
{
    
      Node *p,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        p=new Node;
        p->data=a[i];
        p->next=NULL;
        last->next=p;
        last=p;
    }
}

void display( Node*p)
{
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    
    int A[]={3,5,7,5,6,7,8,8,4};
    int n=9;
    create(A,n);
    display(first);

    return 0;
}