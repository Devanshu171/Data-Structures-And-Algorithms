#include<iostream>
using namespace std;


int findKRotation(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    if (n == 1)
        return 0;

    
    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + n - 1] % n && arr[mid] < arr[mid + 1] % n)
            return mid;

        else
        {
            if (arr[start] < arr[end])
                return start;
           else if (arr[mid] >arr[start])
                start = mid + 1;
            else if(arr[mid]<arr[end])
                end = mid - 1;
        }
    }
}

int main(){
    int n=27;
    int arr[n] = {66 ,72, 79, 86, 95, 104, 106, 110, 119, 123, 124, 129, 132, 136, 137, 142, 150, 2, 12, 14, 17, 26, 30, 36, 38, 46, 52, 60};
    cout<<findKRotation(arr,n);
    return 0;
}