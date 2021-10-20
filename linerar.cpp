#include <iostream>
using namespace std;

int main()
{
    int n = 9;
    int a[] = {1, 2, 3, 4, 5, 6, 78, 9, 99};
    int k = 3;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            cout << i;
    }

    return 0;
}