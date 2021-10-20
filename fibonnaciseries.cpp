#include<iostream>
using namespace std;
int fib(int n)              //recursion
{
    if(n<=1)
   return n;
    
    
    
    else
    return fib(n-1)+fib(n-2);
}
int fib1(int n)                  //itration
{
    int a=0,b=1,s;
    if(n<=1)return n;
    for(int i=2;i<=n;i++){
        s=a+b;
        a=b;
        b=s;
    }
    return s;
}
int main()
{
    int x;
    cin>>x;
    // cout<<fib(x)<<endl;
    cout<<fib1(x)<<endl;
  
    return 0;
}