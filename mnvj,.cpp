#include<iostream>
#include<vector>
using namespace std;
void diagonalDifference(vector<vector<int>> arr) 
{
    int a=0;
    int b=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<=i;j++)
        {
                    if(i==j) 
                    a+=arr[i][j];
                     if ((i+j)%2==0)
                    b+=arr[i][j];

        }
    }
    cout<<a<<" "<<b;
    int diff=abs(a-b);
    // return diff;

}
int main(){
    vector<int> a={1,2,3};
    vector<int> b={4,5,6};
    vector<int> c={7,8,9};
    vector<vector<int>> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
diagonalDifference(arr);
    return 0;
}