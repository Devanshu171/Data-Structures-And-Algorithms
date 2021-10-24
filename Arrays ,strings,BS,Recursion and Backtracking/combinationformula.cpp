#include<iostream>
using namespace std;

int cr(int n,int r)
{
 
    if(n==r || r==0 )
    return 1;
     return cr(n-1,r-1)+cr(n-1,r);
}

int main()
{
    int n,r;
    cin>>n>>r;
    cout<<cr(n,r);
    
    return 0;
}