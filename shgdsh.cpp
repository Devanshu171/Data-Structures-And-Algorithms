#include<iostream>
using namespace std;
bool isPossible(int *arr, int n)
{
    //  Write your code here.
    int count=0;
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>=arr[i-1]&& arr[i]>=arr[i+1])
            count++;  
    }
      if(count==0)
    {
         for(int i=1;i<n-1;i++)
    {
        if(arr[i]<=arr[i-1]&& arr[i]<=arr[i+1])
            count++;    
    }
    }
    if(count>1)
        return false;
    else 
        return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<isPossible(a,n);


    
    return 0;
}