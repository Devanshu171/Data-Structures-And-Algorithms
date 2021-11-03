#include <iostream>
using namespace std;
#define n 20
class queue
{
private:
    int rare;
    int front;
    int *arr;

public:
    queue()
    {
        rare = -1;
        front = -1;
        arr = new int[n];
    }

    void push(int x)
    {
        if (rare != n - 1)
        {
            rare++;
            arr[rare] = x;
        }
        else
            cout << "queue overflow" << endl;
    }
    void pop()
    {
        if (rare != front)
        {
            front++;
        }
        else
            cout << "empty";
    }

    int first()
    {
        if (rare != front)
            return arr[front + 1];
    }

    bool isEmpty()
    {
        if (rare == front)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (rare == n - 1)
            return true;
        else
            return false;
    }
    int last()
    {
        if (rare != front)
            return arr[rare];
            
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
    q.push(6);
    // q.push(6);

    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    q.pop();
    cout << q.first() << endl;
    // q.pop();

    return 0;
}