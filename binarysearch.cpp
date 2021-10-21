#include<iostream>
using namespace std;
int BS(int a[],int l,int h,int k)
{
    if(h>=l){
    int mid=l+(h-l)/2;


    if(a[mid]==k)
        return mid;

    else if(a[mid]<k)
      return BS(a,mid+1,h,k);

    else 
        return BS(a, l, mid - 1, k);
    }
        return -1;


}
int main(){
    int a[]={11,24,37,49,50,61,75,87};
    int n=8;
    int k=50;
    cout<<BS(a,0,n-1,k);
    return 0;
}