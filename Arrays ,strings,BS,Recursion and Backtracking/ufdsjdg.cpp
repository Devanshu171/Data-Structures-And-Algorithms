#include <iostream>
using namespace std;
long getMaximumProfit(long *values, int n)
{
    //Write your code here
    long ans = 0;
    if (n == 1 || n == 0)
    {
        return ans;
    }
    for (long i = 0; i < n - 1; i++)
    {
        long profit;
        for (long j = i + 1; j < n; j++)
        {
            profit = values[j] - values[i];
            ans = max(ans, profit);
        }
    }
    return ans;
}
int main()
{
    int n = 50;
    long a[n] = { -181 ,- 116 ,460, - 656, 91, - 911, - 732, - 663, - 84, 822, - 177,935 ,- 459, - 613, - 729, - 465, - 64, - 639 ,- 67 ,- 87  ,873, 220, 675 ,- 50 ,- 156 ,- 617, 515, - 692, - 290 ,- 475 ,- 77 ,- 94 ,- 502 ,- 336 ,- 635, 782 ,88 ,381 ,220, 691, - 92, 543, 958, 548 ,85, 800 ,- 513, - 757, - 124, 170, 44, - 398, - 135, - 688 };
    cout<<getMaximumProfit(a,n);
    return 0;
}