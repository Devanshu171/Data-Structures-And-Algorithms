#include <iostream>
#include <forward_list>
#include <list>
using namespace std;

int main()
{ // --->singly linked list
    forward_list<int> mysingly = {1, 2, 3, 4, 5, 6, 7};
    // --->doubly linked list
    list<int> mydoubly = {1, 2, 3, 4, 5, 6, 7, 8};
    // remove 's  node with value 2
    mydoubly.remove(2);
    for (auto it : mysingly)
        cout << it << " ";
    cout << endl;
    for (auto it : mydoubly)
        cout << it << " ";
    return 0;
}