#include<iostream>
using namespace std;
// double e(int x,int n)
// { static double p=1 ,f=1;
//     double r;
//     if(n==0)
//         return 1;
    
//     r=e(x,n-1);
//     p*=x;
//     f*=n;
//     return r+p/f;
    
// }
double e(int x,int n)
{
    static double s=1;
    if(n==0)
    return s;
    s=1+x*s/n;
    return e(x,n-1);
}
int main()
{
    int x;
    cin>>x;
    cout<<e(x,10);
    return 0;
}