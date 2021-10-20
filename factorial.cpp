#include<iostream>
using namespace std;

int fact(int n)                     //with recursion
{
    if (n==0)
    return 1;
    else 
    return fact(n-1)*n;
}
// int fact(int n)                  //with loops
// {
//     int a=1;
//     for(int i=n;i>=1;i--)
//     {
//         a*=i;
//     }
//     return a;
// }
int main()
{
    int x;
    cin>>x;
    cout<<fact(x);
    return 0;
}