#include<iostream>
#include<vector>
using namespace std;
vector<int>ans;
void sum1(int i,int sum,int a[],int n)
{
    if(i==n)
    { 
            ans.push_back(sum);
            return;
    }

    sum1(i+1,sum+a[i],a,n);
    sum1(i+1,sum,a,n);

}
int main(){
    int n=2;
    int a[n]={2,3};
    sum1(0,0,a,n);
    for(auto it:ans)
    cout<<it<<" ";
    return 0;
}