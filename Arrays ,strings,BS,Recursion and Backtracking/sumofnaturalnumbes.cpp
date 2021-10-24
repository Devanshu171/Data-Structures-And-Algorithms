#include<iostream>
using namespace std;

int fun(int n)
{
   
     static int sum=0;
     if(n>0)
    {
        sum+=n;
        fun(n-1);
    }
    return sum;
}

int main()
{
    int x;
    cin>>x;
    cout<<fun(x);
    return 0;
}