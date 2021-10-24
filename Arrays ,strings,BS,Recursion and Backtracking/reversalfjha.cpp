#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t>0)
	 {
	     int n;
	     cin>>n;
	     int arr[n];
	     for(int i=0;i<n;i++)
	     {
	      cin>>arr[i]; 
	     }
	     int temp;
	     for(int i=0,j=n-1;i<n;i++,j--)
	     {
	         temp=arr[i];
	         arr[i]=arr[j];
	         arr[j]=temp;
	 
	     }
	     for(int i=0;i<n;i++)
	     cout<<arr[i]<<" ";
	 }
	 
	return 0;
}