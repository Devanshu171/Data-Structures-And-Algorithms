#include<iostream>
#include<vector>
using namespace std;

string str="DLRU";
int di[4]={1,0,0,-1};
int dj[4]={0,-1,1,0};
void path(int i, int j, int n, int m, vector<vector<int>> &vec,string s) 
{
    if(i>=n || i<0 || j>=m||j<0|| vec[i][j]==1)
    return;

     

    vec[i][j] = 1;
    for(int x=0;x<4;x++)
    {
        s+=str[x];
       
        path(i+di[x],j+dj[x],n,m,vec,s);
        s.pop_back();
        }
        vec[i][j] = 0;
}
int main()
{
    int n=3,m=3;
    vector<vector<int>>vec(n,vector<int>(m,0));
    path(0,0,n,m,vec,"");
    return 0;
}