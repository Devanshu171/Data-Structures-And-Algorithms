#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=5;i<=n;i*=5)
    {sum+=n/i; }
   cout<<sum;
        
        
return 0;
}