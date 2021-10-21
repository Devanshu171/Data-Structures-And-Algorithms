#include <iostream>
#include <vector>
using namespace std;
int n = 3;
void combi(int a[], int i, int sum,vector<int>vec,vector<vector<int>>&ans)
{
    if (i == n)
    
        if (sum == 0)
            {
                ans.push_back(vec);
                return;
            }
            return;

    
    
    if (a[i] <= sum)
    {
        sum -= a[i];
        vec.push_back(a[i]);
        return combi(a, i, sum,vec,ans);
        vec.pop_back();
        sum += a[i];
    }
   return combi(a, i+1, sum,vec,ans);

    
}
int main()
{
    int a[] = {1, 2, 3};
    int sum = 4;
    vector<int>vec;
    vector<vector<int>>ans;
     combi(a, 0, sum,vec,ans);
for(int i=0;i<ans.size();i++)
{
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}