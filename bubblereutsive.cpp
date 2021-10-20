#include <iostream>
using namespace std;
void bs(int a[], int i, int n)
{
    if (i == n - 1)
        return;
    for (int j = 0; j < n - 1; j++)
    {
        if (a[j] > a[j + 1])
            swap(a[j], a[j + 1]);
        
    }
    bs(a, i + 1, n);
}
int main()
{
    int a[] = {33,44,636,4756,878,678,4,3,356,6,5,4,};
    int n = 12;
    bs(a, 0, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}