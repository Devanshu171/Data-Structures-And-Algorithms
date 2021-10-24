#include <iostream>
using namespace std;
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

void quicksort(int a[], int low, int high)
{
    if (low >= high)
        return;

    int s = low;
    int e = high;
    int mid = s + (e - s) / 2;
    int p = a[mid];

    while (s <= e)
    {
        while (a[s] < p)
            s++;
        while (a[e] > p)
            e--;

        if (s <= e)
        {
            swap(a[e], a[s]);
            s++;
            e--;
        }
    }
    quicksort(a, low, e);
    quicksort(a, s, high);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quicksort(a, 0, n - 1);
    print(a, n);
    return 0;
}