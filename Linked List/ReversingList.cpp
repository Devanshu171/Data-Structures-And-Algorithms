#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *P = NULL;
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
int Count(Node *k)
{
    int count = 0;
    while (k != NULL)
    {
        count++;
        k = k->next;
    }
    return count;
}

void Display(Node *k)
{
    while (k != NULL)
    {
        cout << k->data << " ";
        k = k->next;
    }
    cout << endl;
}

// Reversing by interchanging elements
void Revers(Node *k)
{

    Node *q = k;
    int n = Count(P);
    int a[n];
    int ind = 0;
    while (q != NULL)
    {
        a[ind++] = q->data;
        q = q->next;
    }
    ind--;
    while (k != NULL)
    {
        k->data = a[ind--];
        k = k->next;
    }
}

// Reversing using Sliding Pointers

//  _-> __->__->__->NUll
//      r   q   k
// we can't change link of k as our rest of the list will be lost
// so we take another pointer q that will change the link
//  changing the head node should point to NUll after changing 
// so to keep the trak of link behind q we take another pointer r
// so basically q pointer is tailing k ans r pointer is tailing q
void Revers2(Node *k)
{
    Node *q=NULL,*r;

        while(k!=NULL)
        {
            r=q;
            q=k;
            k=k->next;
            q->next=r;

        }
        P=q;

}
// recursive function to revers a list
void Revers3(Node *q,Node *k)
{
    if(k!=NULL)
    {
        Revers3(k,k->next);
        k->next=q;
    }
    else
    P=q;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    cout << "Before Reversing" << endl;
    Display(P);
    Revers3(NULL,P);
    cout << "After Rotation" << endl;
    Display(P);

    return 0;
}