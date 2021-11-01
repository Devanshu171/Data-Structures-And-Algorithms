#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
   int home[n];
    int guest[n];
    int i=0,j=0;
    while (n--)
    {

        int h, g;
        cin >> h >> g;
        home[i++]=h;
        guest[j++]=g;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == guest[j])
                count++;
        }
    }
    cout << count;
}