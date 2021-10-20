#include<iostream>
#include<algorithm>
using namespace std;

int main()
{ int n=8;
// cin>>n;

int a[n]={1,2,3,4,5,7,8,9};
// for(int i=0;i<n;i++)
// {
//     cin>>a[i];
// }
sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int *ptr=upper_bound(a,a+n,6);
        cout<<(*ptr)<<endl;
    return 0;
}