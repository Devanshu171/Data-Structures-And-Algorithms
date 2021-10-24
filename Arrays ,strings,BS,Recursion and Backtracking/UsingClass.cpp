#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtTali(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void diaplay(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp=temp->next;
    }
}

void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
    
    }
int main()
{
    node* head=NULL;
    insertAtTali(head,1);
    insertAtTali(head,2);
    insertAtTali(head,3);
    insertAtTali(head,4);
    insertAtHead(head,4);
    diaplay(head);

    return 0;
}