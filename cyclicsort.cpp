#include<iostream>
using namespace std;
void cyclicsort(int a[],int n)
{
    int i=0;
    while(i<n)
    {
        if (a[a[i] - 1] != a[i] && a[i]<n)
            swap(a[i], a[a[i] - 1]);
        else
        i++;
    }
}
int main(){
    int a[]={15,4,3,5,7,2,22};
    int n=7;
    cyclicsort(a,n);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    return 0;
}