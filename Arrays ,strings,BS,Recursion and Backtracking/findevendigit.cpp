#include <iostream>
using namespace std;

int countEven(int a[], int n)
{
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        string s = to_string(a[i]);
        if(s.size()%2==0)
            even++;
    }
    return even;
    
}
int main()
{
    int a[] = {12, 345, 2, 6, 7896};
    cout << countEven(a, 5);
    return 0;
}