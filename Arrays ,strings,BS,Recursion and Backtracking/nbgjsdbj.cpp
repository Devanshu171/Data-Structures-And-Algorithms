

#include <iostream>

using namespace std;


void rotatebyone(int a[],int n)
{	
	int x=a[n-1];
		
		for(int i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=x;
	
	
}
void rotate(int a[],int n,int k)
{
	for(int i=0;i<k;i++)
	{
		rotatebyone(a,n);
	}
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main() {
	int n,k;
	cin >> n;	
    
    cin>>k;
	int a[n];
    int i=0;
	while(i<n)
    {
        cin>>a[i];
        i++;
        n--;
    }
    cout<<endl;
	rotate(a,n,k);
	display(a,n);


    return 0;
}

