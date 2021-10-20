#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{   unordered_map<string,int>mpp;
int n;
cin>>n;
for(int i = 0; i < n; i++)
{
    string s;
    cin>>s;
    mpp[s]++;
}
for(auto it:mpp)
{
  cout<<it.first<<" "<<it.second<<endl;  
}

    
    return 0;
}