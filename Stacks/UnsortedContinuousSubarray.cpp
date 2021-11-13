#include<iostream>
using namespace std;
 int findUnsortedSubarray(int nums[],int n) {
        int start;
        int end;
        bool flag=false;
        
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                start=i;
                flag=true;
                break;
            }
        }
        
        if(!flag)
            return 0;
        
        for(int j=n-1;j>0;j--){
            if(nums[j]<nums[j-1]){
                end=j;
                break; 
            }
        }
        return end-start+1;
    }
int main(){
  int a[]={2,6,4,8,10,9,15};
  int n=7;
cout<<findUnsortedSubarray(a,n);
  return 0;
}