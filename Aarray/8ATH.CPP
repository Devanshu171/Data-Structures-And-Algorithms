#include <iostream>
#include <vector>
using namespace std;
int n = 4, m = 4;
vector<vector<int>> vis(n, vector<int>(m, 0));
string dir = "DARBUCLE";
int di[] = {1, -1, 0, -1, -1, 1, 0, 1};
int dj[] = {0, -1, 1, 1, 0, -1, -1, 1};
int no = 0;
void path(int i, int j, string s)
{
    if (i >= n || j >= m || i < 0 || j < 0 || vis[i][j] == 1)
        return;

    if (i == n - 1 && j == m - 1)
    {
        no++;
        cout << no << ": " << s << endl;
    }
    vis[i][j] = 1;

    for (int x = 0; x < n; x++)
    {
        s += dir[x];
        path(i + di[x], j + dj[x], s);
        s.pop_back();
    }

    vis[i][j] = 0;
}

int main()
{

    path(0, 0, "");

    return 0;
}