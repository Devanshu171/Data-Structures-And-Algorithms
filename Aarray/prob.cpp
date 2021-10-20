#include<iostream>
using namespace std;
#include<vector>

vector<int> compareTriplets(vector<int> a, vector<int> b) {
     vector<int> res(2,0);  
        

for(int i=0,j=0;i<a.size();i++,j++)
{
     
    if(a[i]>a[j]) res[0]++;
    
      else if(a[i]<a[j]) res[1]++;
            
}
        return res;
}
int main(){
    vector<int> a{5,6,7};
    vector<int> b{3,6,10};
    vector<int> r=compareTriplets(a,b);
    for (int i = 0; i < r.size(); i++) 
        cout << r[i]<<" ";
    return 0;
}