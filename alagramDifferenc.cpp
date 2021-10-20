#include<iostream>
using namespace std;

int main(){
    string str1="accept";
    string str2="execpt";
     int a[26]={0};
    int b[26]={0};
    int n=str1.size();
    int m=str2.size();
//     if(n!=m)
//         return -1;
    
    for(int i=0;i<n;i++)
    {
        a[str1[i]-'a']++;
        b[str2[i]-'a']++;
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[str2[i]-'a']!=b[str1[i]-'a'])
            count+=a[str1[i]-'a']-b[str2[i]-'a'];
    }
    cout<<count;
    return 0;
}