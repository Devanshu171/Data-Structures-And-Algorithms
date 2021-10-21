class Solution
{
public:
    string dir = "DLRU";
    int di[4] = {1, 0, 0, -1};
    int dj[4] = {0, -1, 1, 0};
    void helper(int i, int j, string s, vector<string> &ans, vector<vector<int>> &m, int n,
                vector<vector<int>> &vis)
    {
        if (i >= n || j >= n || i < 0 || j < 0 || vis[i][j] == 1 || m[i][j] == 0)
            return;

        if (i == n - 1 && j == n - 1)
        {

            ans.push_back(s);
        }
        vis[i][j] = 1;

        for (int x = 0; x < 4; x++)
        {
            s += dir[x];
            helper(i + di[x], j + dj[x], s, ans, m, n, vis);
            s.pop_back();
        }

        vis[i][j] = 0;
    }

    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        string s = "";
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));

        helper(0, 0, "", ans, m, n, vis);
        return ans;
    }
};