#include<iostream>
using namespace std;
void print(int n,int k)
{
    if(n<=0){
        cout<<n<<" ";
        return;
    }
    
    cout<<n<<" ";
    print(n-k,k);
    cout<<n<<" ";
}
int main(){
    print(5,2);

    return 0;
}