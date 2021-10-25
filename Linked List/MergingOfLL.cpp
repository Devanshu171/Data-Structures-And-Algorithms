#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

Node *P = NULL;
Node *S = NULL;

void create(int a[], int n)
{
    Node *temp, *last;
    P = new Node;
    P->data = a[0];
    P->next = NULL;
    last = P;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void create2(int a[], int n)
{
    Node *temp, *last;
    S = new Node;
    S->data = a[0];
    S->next = NULL;
    last = S;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}
Node *m=NULL;   // head of new merged list

void Merging(Node *k,Node *q){
    Node *last;
    if(k->data<=q->data)   // pointing head 
    {
        m=k;
        k=k->next;
        last=m;
        m->next=NULL;
    }
    else
    {
        m = q;
        q = q->next;
        last = m;
        m->next = NULL;
    }


    while(k!=NULL && q!=NULL)  // linking rest by comparing using last pointer
    {
        if(k->data<=q->data){

            last->next=k;
            last=k;
            k=k->next;
            last->next=NULL;
        }
        else 
        {

            last->next = q;
            last =q;
            q = q->next;
            last->next = NULL;
        }
    }

    if(k!=NULL)         // link the rest list
    last->next=k;
    else if(q!=NULL)
    last->next=q;

}
int main()
{
    int a[] = {1, 4, 6, 8};
    int b[] = {2, 5, 7, 10};
    create(a, 4);
    create2(b, 4);
    display(P);
    display(S);
    Merging(P,S);
    display(m);
    return 0;
}