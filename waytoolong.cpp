#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int len=s.size();

        if(len<=10)
        cout<<s<<endl;
        else{
            char temp=s[len-1];
            s.erase(1,len);
            s+=to_string(len-2);
            s+=temp;
            cout<<s<<endl;
        }
    }
    return 0;
}