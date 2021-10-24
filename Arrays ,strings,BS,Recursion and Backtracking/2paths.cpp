#include<iostream>
using namespace std;
int no=0;
void path(int i,int j,int n,int m,string str)
{
          if(i>=n || j>=m)
             return;
        if(i==n-1 && j==m-1)
        {   no++;
            cout<<no<<": "<<str<<endl;;
            return;
        }
      
    

    
    str+="D";
    path(i+1,j,n,m,str);
    str.pop_back();

    str+="R";
    path(i,j+1,n,m,str);
    // str.pop_back();
}
int main(){
    int n=3,m=2;
    
    char temp;
    path(0,0,n,m,"");
    return 0;
}
