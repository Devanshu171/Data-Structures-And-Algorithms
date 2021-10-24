#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P=NULL;

void create(int a[],int n){
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
void display(Node *k)
{
    while(k!=NULL){
        cout <<k->data<<" ";
        k=k->next;
    }
    cout<<endl;
}

void MoveNodeToHead(Node *k,int x)
{
    Node *q=NULL;
    while(k!=NULL){
        if(k->data==x){
            q->next=k->next;
            k->next=P;
            P=k;
        }
        q=k;
        k=k->next;
    }
}
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    create(a,10);
    cout<<"Before moving node to head"<<endl;
    display(P);
    MoveNodeToHead(P,5);
    cout<<"after moving node to head"<<endl;
    display(P);
    return 0;
}