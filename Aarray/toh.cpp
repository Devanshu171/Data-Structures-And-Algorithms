#include<iostream>
#include<vector>
using namespace std;
int index = 0;
void helper(int n, int a, int b, int c, vector<vector<int>> &vec)
{
    if (n > 0)
    {
        helper(n - 1, a, c, b, vec);
        vec[index].push_back(a);
        vec[index].push_back(c);
        index++;
        helper(n - 1, b, a, c, vec);
    }
}
vector<vector<int>> towerOfHanoi(int n)
{
    //    Write your code here.
    vector<vector<int>> vec;
    helper(n, 1, 2, 3, vec);
    return vec;
}
int main(){
    int n=3;
    vector<vector<int>> ans=towerOfHanoi(n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<ans[i][j];
    }

    return 0;
}