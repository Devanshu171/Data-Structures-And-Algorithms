#include<iostream>
using namespace std;

struct ListNode{
    ListNode *next;
    int val;
};
ListNode *head=NULL;

void Create(int a[], int n)
{
    ListNode *temp, *last;
    head = new ListNode;
    head->val = a[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        temp = new ListNode;
        temp->val = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
 // just link last node with head and we have a circular linked list
}
void Display(ListNode *k){
    while(k!=NULL){
        cout<<k->val<<" ";
        k=k->next;
    }
    cout<<endl;
}
void removeElements(ListNode *head, int x)
{
    ListNode *k = head, *q;

    if (head == NULL)
        return;
    while (k != NULL)
    {
        if (head->val == x)
        {
            if (head->next != NULL)
            {
                head = head->next;
                delete k;
                k = head;
            }
            else
                return;
        }

        if (k->val == x)
        {

            if (k->next != NULL)
            {
                q->next = k->next;
                delete k;
                k = q;
            }
            else
                q->next = NULL;
            delete k;
            k = q;
        }
        q = k;
        k = k->next;
    }
    return;
}
int main(){
    int a[]={1,2,3,4,5,3,4,5,6};
    Create(a,9);
    removeElements(head,3);
    Display(head);
    return 0;
}