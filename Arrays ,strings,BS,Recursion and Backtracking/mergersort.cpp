#include<iostream>
using namespace std;

void merge(int a[],int low ,int high,int mid)
{
    int i=low,j=mid+1,k=low;
    int b[high+1];
    while(i<=mid && j<=high)
    {
        if(a[i]<=a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }

    for(;i<=mid;i++)
    b[k++]=a[i];

    for(;j<=high;j++)
    b[k++]=a[j];

    for(int o=low;o<=high;o++)
    a[o]=b[o];


}
void  mergesort(int a[],int low,int high)
{
    int mid;
        if(low>=high)
       return;

         mid=low+(high-low)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
       

}
int main(){
    int a[]={1,234,343,54,6547,3,424,3263};
    int n=8;
mergesort(a,0,n-1);

for(int i=0;i<n;i++)
cout<<a[i]<<" ";
    return 0;
}