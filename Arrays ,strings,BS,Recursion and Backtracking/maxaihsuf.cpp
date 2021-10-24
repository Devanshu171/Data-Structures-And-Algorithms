#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;

int main(){
   int n;
cin>>n;
multiset<int>ms;
for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    ms.insert(x);
}

for(auto it:ms)
{
    cout<<it<<" ";
}

    
    return 0;
}