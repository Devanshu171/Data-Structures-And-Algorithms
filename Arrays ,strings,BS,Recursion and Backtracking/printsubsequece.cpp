#include<iostream>
#include<vector>
using namespace std;
vector<int>vec;
void subseq(int i,vector<int>&vec,int a[],int n,int sum,int k)
{
    if(i==n)
    {
        if(vec.size()!=0 && sum%k==0)
        for(auto it:vec){
            cout<<it<<" ";
        }
            cout<<endl;
            return;
    }

    vec.push_back(a[i]);
    sum+=a[i];
    subseq(i+1,vec,a,n,sum,k);
    vec.pop_back();
    sum-=a[i];
    subseq(i+1,vec,a,n,sum,k);

}
int main(){
    int n=3;
    int a[]={4,1,2};
    int k=3;
    vector<int>vec;
    int sum;
    subseq(0,vec,a,n,sum,k);
    return 0;
}