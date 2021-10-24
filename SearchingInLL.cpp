#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *P=NULL;

void create(int a[],int n)
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

int Search(Node *k,int x)
 {  //int count=0;
    while(k!=NULL){
        // count++;
        if(k->data==x)
        return x;
        k=k->next;
    }
    return -1;
}

int Rsearch(Node *k,int x)
{
    if(k==NULL)
    return -1;

    if(k->data==x)
    return x;
    Rsearch(k=k->next,x);
}
int main(){
    int a[]={1,3,6,2,47,33,90,13,16};
    create(a,9);
cout<<Rsearch(P,600);
    return 0;
}