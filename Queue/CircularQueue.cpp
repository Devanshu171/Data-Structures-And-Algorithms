#include <iostream>
using namespace std;
#define n 7
class queue
{
private:
    int rare;
    int front;
    int *arr;

public:
    queue()
    {
        rare = 0;
        front = 0;
        arr = new int[n];
    }
    void push(int x)
    {
        if ((rare + 1) % n != front)
        {
            rare = (rare + 1) % n;
            arr[rare] = x;
        }
        else
            cout << "queue over flow" << endl;
    }
    void pop()
    {
        if (front != rare)
            front = (front + 1) % n;
        else
            cout << "empty" << endl;
    }

    bool isfull()
    {
        if ((rare + 1) % n == front)
            return true;
        else
            return false;
    }
    bool isEmpty()
    {
        if (front == rare)
            return true;
        else
            return false;
    }
    int first()
    {
        if (rare != front)
        {
            cout << arr[(front + 1)] << endl;
        }
    }
    int last()
    {
        if (rare != front)
            cout << arr[rare] << endl;
    }
    void display()
    {
        int i = front + 1;

        while (i != (rare + 1) % n)
        {
            cout << arr[i] << " ";
            i = (i + 1) % n;
        }
        cout << endl;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);

    q.push(3);
    q.push(4);
    q.push(5);
    q.push(5);
    // q.pop();
    // q.pop();
    q.push(5);
    q.push(5);

    q.display();
    cout << q.first() << endl;
    cout << q.last() << endl;
    cout << q.isEmpty() << endl;
    cout << q.isfull() << endl;

    return 0;
}