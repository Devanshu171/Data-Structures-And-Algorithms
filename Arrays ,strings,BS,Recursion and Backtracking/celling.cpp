#include <iostream>
using namespace std;
int findcel(int a[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    if(a[end]<target){
    cout<<"no celling";
    exit ;}
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (a[mid] == target)
            return a[mid];

         else if (a[mid] > target)
            end = mid - 1;

         else
            start = mid + 1;
            
            }
            return a[start];
    }
   
int findfloor(int a[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    if(target<a[start])
    {
        cout<<"NO FLOOR";
        exit;
    }
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if (a[mid] == target)
            return a[mid];

         else if (a[mid] > target)
            end = mid - 1;

         else
            start = mid + 1;
            
            }
            return a[end];
    }
   

int main()
{
    int a[] = {2, 3, 5 , 9, 14, 16, 19};
    cout << findfloor(a, 7, 1) << endl;
    cout << findcel(a, 7, 20);
    return 0;
}