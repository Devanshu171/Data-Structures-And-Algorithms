#include <iostream>
using namespace std;
void shellsort(int a[], int n)
{
    int gap = n / 2;
    while (gap >= 1)
    {
        int i = 0;
        int j = i + gap;
        while (j < n)
        {
            if (a[j] < a[i])
            {
                swap(a[j], a[i]);
                int k = i - gap;
                while (k >= 0)
                {
                    if (a[k + gap] < a[k])
                    {
                        swap(a[k + gap], a[k]);
                        k -= gap;
                    }
                    else
                        break;
                }
            }
            i++;
            j = i + gap;
        }
        gap /= 2;
    }
}
int main()
{
    int a[] = {9,8,7,66,0,66,77,88,-29,34,46745,737367,3456344, 67356,5673,673,6473,4674, 67,};
    int n = 19;
    shellsort(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}