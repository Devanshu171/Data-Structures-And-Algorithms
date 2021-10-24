#include<iostream>
using namespace std;
void ss(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {   int j=i+1,k=i;
        for(;j<n;j++)
        {
            if(a[j]<a[k])
            k=j;

        }

        swap(a[i],a[k]);
    }
}

int main(){
    int a[]={10,9,-5,0,5,4,2,3,1};
    int n=9;

    for(auto it:a)
    cout<<it<<" ";
    cout<<endl;
    ss(a,n);

    for (auto it : a)
        cout << it << " ";
    return 0;
}