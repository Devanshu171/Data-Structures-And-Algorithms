#include<iostream>
#include<vector>
using namespace std;
int n=62;
bool subseq(int i,int a[],int sum,int k)
{
        if(i==n){
            if(sum==k)
       return true;
       else
        return false;
        }
            sum+=a[i];
       if(subseq(i+1,a,sum,k))
       return true;
        sum-=a[i];
      if(subseq(i+1,a,sum,k))
      return true;
        return false;
}
int main(){
    int a[] = {89, 7, 41, 43, 65, 49, 47, 6, 91, 30, 71, 51, 7, 2, 94, 49, 30, 24, 85, 55, 57, 41, 67, 77, 32, 9, 45, 40, 27, 24, 38, 39, 19, 83, 30, 42, 34, 16, 40, 59, 5, 31, 78, 7, 74, 87, 22, 46, 25, 73, 71, 30, 78, 74, 98, 13, 87, 91, 62, 37, 56, 68};
    int k = 3656;
    cout << subseq(0, a, 0, k);


    
    return 0;
}