#include<iostream>
using namespace std;
bool isvalid(int a[], int Gdays, int mx,int n)
{
    int days = 0;
    int capacity = 0;
    
    for (int i = 0; i < n; i++)
    {
        capacity += a[i];

        if (capacity > mx)
        {
            days++;
            capacity = a[i];
        }
        if (days > Gdays)
            return false;
    }
    
        return true;
           
}
int shipWithinDays(int weights[], int days,int n)
{
    int Tweight = weights[0];
    int maxWeight = 0;
    int res = -1;
    // int n = weights.size();

    if (days > n)
        return res;

    for (int i = 0; i < n; i++)
    {
        Tweight += weights[i];
        if (maxWeight<weights[i])
            maxWeight=weights[i];
    }

    int end = Tweight;
    int start = maxWeight;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isvalid(weights, days, mid,n))
        {
            res = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return res;
}
int main(){
int a[]={1,2,3,4,5,6,7,8,9,10};
int n=10;
int days=5;
cout << shipWithinDays(a,days,n);
 return 0;
}