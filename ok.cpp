// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    //Function to return a list of indexes denoting the required
    //combinations whose sum is equal to given number.

    void helper(int i, int sum, int k, vector<int> &a, vector<int> &vec, vector<vector<int>> &ans)
    {
        int n = a.size();
        if (sum >= k || i == n)
        {
            if (sum == k)
            {
                ans.push_back(vec);
                return;
            }
            return;
        }

        if (a[i] <= k)
        {
            sum += a[i];
            vec.push_back(a[i]);
            helper(i, sum, k, a, vec, ans);
            sum -= a[i];
            vec.pop_back();
        }
        helper(i + 1, sum, k, a, vec, ans);
    }
    vector<vector<int>> combinationSum(vector<int> &a, int k)
    {
        // Your code here
        vector<vector<int>> ans;
        vector<int> vec;
        helper(0, 0, k, a, vec, ans);

        sort(ans.begin(), ans.end(), [&](int a, int b)
             { return ans[a].size() != ans[b].size() ? ans[a].size() > ans[b].size() : a > b; });
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> A;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }
        int sum;
        cin >> sum;
        Solution ob;
        vector<vector<int>> result = ob.combinationSum(A, sum);
        if (result.size() == 0)
        {
            cout << "Empty";
        }
        for (int i = 0; i < result.size(); i++)
        {
            cout << '(';
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j];
                if (j < result[i].size() - 1)
                    cout << " ";
            }
            cout << ")";
        }
        cout << "\n";
    }
} // } Driver Code Ends