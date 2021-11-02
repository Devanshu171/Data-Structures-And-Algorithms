#include <iostream>
using namespace std;
bool reverse(int a[], int start, int end, int n)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        swap(a[i], a[j]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > a[i + 1])
            return false;
    }
    return true;
}
void checksorted(int a[], int n)
{
    int i = 0, j = 1;
    int start = -1, end = -1;
    while (j < n)
    {
        if (a[i] > a[j])
        {
            start = i;
            while ( j<n && a[i] > a[j])
            {
                j++;
            }
            end = j - 1;
            if (reverse(a, start, end, n))
            {
                cout << "yes" << endl;
                cout << a[start] << " " << a[end];
                return;
            }
            else
            {
                cout << "no";
                return;
            }
        }
        i++;
        j = i + 1;
    }
    cout << "yes" << endl;
    cout << a[0] << " " << a[0];
}
int main()
{
    int n;
    
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    checksorted(a, n);

    return 0;
}