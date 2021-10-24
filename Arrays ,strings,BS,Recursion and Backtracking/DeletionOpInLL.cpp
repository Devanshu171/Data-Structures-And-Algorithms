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

void Delete(Node *k, int x)
{
    Node *q = NULL;
    if (x == 1)  //Deleting first Node
    {
        q = P;
        P = P->next;
        cout << q->data << " :Deleted"<<endl;;
        delete q;
        return;
    }
    int ind = 0;
    while (k != NULL) // Deleting from the rest
    {
        ind++;
        if (ind == x)
        {
            q->next = k->next;
            cout << k->data<<" :Deleted"<<endl;
            delete k;     // delocating node after unlinking
            return;
        }
        q = k;
        k = k->next;
    }

    cout << "Data not Found"<<endl;
}

void diaplay(Node *k){
    while(k!=NULL)
    {
        cout<<k->data<<" ";
        k=k->next;
    }
    cout<<endl;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);
    Delete(P,4);
    diaplay(P);
    
    return 0;
}