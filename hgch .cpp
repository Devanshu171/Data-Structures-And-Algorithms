#include <iostream>
using namespace std;

void rev(int start,int end ,int arr[])
{
    while(start<end)
    {
    int x=arr[start];
    arr[start]=arr[end];
    arr[end]=x;
    start++; 
    end--;
        
    }
}
int main() {
    
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        int k;
        cin>>n>>k;
        k=k%n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        rev(0,n-1,a);
        rev(n-k,n-1,a);
        rev(0,n-k+1,a);
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        
    }
    return 0;
}