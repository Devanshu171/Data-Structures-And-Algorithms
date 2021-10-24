#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int ar[10]={1,1,3,1,2,1,4,4,4,4};
    int n=10;
    int arr[n]={0,0,0,0,0,0,0,0,0,0};
    int arrr[n]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<n;i++)
    {
        if(arr[ar[i]]!=2) 
        arr[ar[i]]++;
        else
        arrr[ar[i]]++;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2) 
        count++;
        if(arrr[i]==2)
         count++;
    }
    cout<<count;


    return 0;
}