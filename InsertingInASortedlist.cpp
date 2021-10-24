#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P=NULL;

void Create(int a[],int n)
{
    Node *temp,*last;

    P=new Node;
    P->data=a[0];
    P->next=NULL;
    last=P;

    for(int i=1;i<n;i++)
    {
        temp=new Node;
        temp->data=a[i];
        temp->next=NULL;
        last->next=temp;
        last=temp;
    }

}

void InsertSorted(Node *k,int x)
{
    Node *temp,*q;
    temp=new Node;
    temp->data=x;
    temp->next=NULL;

    if(k==NULL){ // if list is empty
    P=temp;
    return;
        }
    if(x<k->data) //is x is smallest element
    {
        temp->next=P;
        P=temp;
        return;
    }
    while(k!=NULL)
    {
        if(k->data>x)
        {
            temp->next=q->next;
            q->next=temp;
            return;
        }
        q=k;
        k=k->next;
    }

    q->next=temp; // if x is largest element

}
void Display(Node *k)
{
    while(k!=NULL)
    {
        cout<<k->data<<" ";
        k=k->next;
    }
    cout<<endl;
}
int main(){
    int a[]={1,2,3,5,6,7};
    // Create(a,6);
    InsertSorted(P,0);
    InsertSorted(P,5);
    InsertSorted(P,401);
    InsertSorted(P,4);
    Display(P);

    return 0;
}