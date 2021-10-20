#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n=3;
    // vector<string> vec(n,string(n,"."));
    vector<vector<int>>vec(n,vector<int>(n,0));
    vector<string> temp(n, string(n, '.'));
    vector<int> temp(n, 0);

    return 0;
}