#include<iostream>
#include<unordered_set>
using namespace std;
int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        // Complete the function
        int ans=0;
        int i=0,j=0;
        int sum=0;
        while(j<n){
           sum+=a[j];
           if(sum<k) j++;
           else if(sum==k){
               ans=max(ans,j-i+1);
               j++;
           }
           else{
               while(sum>k){
                   sum-=a[i];
                   i++;
               }
               if(sum==k){
                   ans=max(ans,j-i+1);
               }
               j++;
           }
        }
        return ans;
    
    } 
	
int main(){
  int a[]={1,2,3,4,5,6,7,8,9,10,2,2,2,2,2,1,1,1,1,1};
  cout<<lenOfLongSubarr(a,20,15);
  return 0;
}