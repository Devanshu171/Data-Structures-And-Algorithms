#include<iostream>
using namespace std;
int findSecondLargest(int n, int arr[])
{
    // Write your code here.
    int ans=-1;
   
    int max=-100000;
    int secondmax=-100000;
    for(int i=0,j=0;i<n;i++,j++)
    {
        if(arr[i]>max)
            max=arr[i];
        
        if(arr[j]>secondmax && arr[j]<max )
        {
			secondmax=arr[j];
            ans=secondmax;
        }
        
    }
    return ans;
    
}
int main(){
    int a[]={-12, -15, -17, 14,20 };

    int n=5;
    cout<<findSecondLargest(n,a);
    return 0;
}