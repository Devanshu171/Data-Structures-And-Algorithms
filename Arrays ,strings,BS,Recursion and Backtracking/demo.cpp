#include<iostream>
using namespace std;
int maxElement(int a[],int n)
{
    int maxi=-100000;
    for(int i=0;i<n;i++)
    maxi=max(maxi,a[i]);

    return maxi;

}

int main(){

    int a[] = {19, 10, -2, 0, 1, 6, 3, 8, 33, 0};
    int n = 10;
    int mx = maxElement(a, n)+1;
    int count[mx] = {0};
    for (int i = 0; i < n; i++)
        count[a[i]]++;
        
        for(int i=0;i<mx;i++)
        cout<<count[i]<<" ";

    return 0;
}