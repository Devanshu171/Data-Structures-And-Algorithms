#include<iostream>
using namespace std;
struct Node{
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
int sum(Node *k)
{   int sum=0;

    while(k!=NULL)
    {
        sum += k->data;
        k=k->next;
    }

    return sum;
}
// recursive version
int Rsum(int sum,Node *k){
    if(k==NULL)
    return sum;
       sum += k->data;
     Rsum(sum, k = k->next);
}
int main(){
    int a[]={10,10,10,10,10,10,10,10,10,10};
    Create(a,10);
    // cout<<sum(P);
    cout<<Rsum(0,P);
    return 0;
}