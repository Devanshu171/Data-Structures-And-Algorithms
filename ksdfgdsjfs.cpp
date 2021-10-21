#include<iostream>
#include<vector>
using namespace std;

vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    int n=mat.size();
    int m=mat[0].size();
    vector<int> arr(n*m);
    int k=0;
    for(int i=0;i<n;i++)
    {	
			if(i%2==0)
            {	
                for(int j=0;j<m;j++)
                  arr[k++]=mat[i][j];
                   }
        else {
           { for(int j=m-1;j>=0;j--)
    			arr[k++]=mat[i][j];}
        }
    }
    return arr;
}

int main(){

    vector<vector<int>> mat
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
   vector<int>a(rowWaveForm(mat));
   for(int i=0;i<9;i++)
   {
       cout<<a[i]<<" ";
   }
    
    
    return 0;
}

