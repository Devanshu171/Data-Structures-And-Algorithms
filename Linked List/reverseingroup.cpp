#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    
 };
  ListNode *P = NULL;
    void create(int a[], int n)
    {
        ListNode *temp, *last;

        P = new ListNode;
        P->val = a[0];
        P->next = NULL;
        last = P;

        for (int i = 1; i < n; i++)
        {
            temp = new ListNode;
            temp->val = a[i];
            temp->next = NULL;
            last->next = temp;
            last = temp;
        }
    }

    void Display(ListNode *k)
    {
        while (k != NULL)
        {
            cout << k->val << " ";
            k = k->next;
        }
        cout << endl;
    }

    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *dummy = new ListNode,
        *k = dummy, *pre = dummy;
        dummy->val=-1;
        dummy->next=head;
        if (head == NULL || head->next == NULL)
            return head;
        for (int i = 0; i < left; i++)
        {
            pre = k;
            k = k->next;
        }
        ListNode *cur = k, *prev = pre, *nxt;

        for (int i = left; i <= right; i++)
        {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        pre->next = prev;
        k->next = cur;

        return dummy->next;
    }
    ListNode *reverseKGroup(ListNode *head, int n)
    {
        if (n == 1 || n == 0)
            return head;
        ListNode *dummy = new ListNode, *k = dummy;
        dummy->next=head;
        dummy->val=-1;
        int left = 1, right = 0;

        while (k != NULL)
        {
            int gp = n;

            while (gp-- && k->next!=NULL)
            {
                k = k->next;
                right++;
            }
            gp++;
            if (gp == 0 && k!=NULL)
            {
                ListNode *newhead = reverseBetween(dummy->next, left, right);
                dummy->next = newhead;
            }
            left = right + 1;
        }

        return dummy->next;
    }
    int main()
    {   cout<<3/5;

        int a[] = {1, 2, 3, 4, 5,6,7,8,9};
        create(a, 9);
        
        Display(P);
        ListNode *new1 = reverseKGroup(P,3);
        Display(new1);

            return 0;
    }