

#include <iostream>

using namespace std;


int* rotate(int a[],int n,int k)
{	
	int x=a[n-1];
	for(int j=0;j<k;k++)
	{	
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=x;
	}
	return a;
	
}


int main() {
	int n,k;
	cin >> n;										// Reading input from STDIN
	cin>>k;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[n];
	}
	rotate(a,n,k);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

