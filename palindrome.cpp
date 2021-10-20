#include<iostream>
using namespace std;

int main()
{
    int n,r;
     int sum=0;
    cin>>n;
  int N=n;

    
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;

    }
   if(N==sum) cout<<"Yes";
   else cout<<"No";
        
    return 0;
}