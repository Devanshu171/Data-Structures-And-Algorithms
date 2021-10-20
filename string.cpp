#include<iostream>
using namespace std;
// string leftRotate(string str, int d) {
//     // Write your code here.
//     int n=str.size();
//    string s=str.substr(0,d);
//     for(int i=0;i<n-d;i++)
//     {
//         str[i]=str[i+d];
//     }
//     // str=str+s;
//     return str;
// }

// string rightRotate(string str, int d) {
//     // Write your code here.
//      int n=str.size();
//    string s=str.substr(n-d,n);
//     for(int i=n-1;i>=d;i--)
//     {
//         str[i]=str[i-d];
//     }
//     s=str+s;
//     return str;
// }
int main(){
    string s="codingninjas";
    int n=s.size();
    int d;
    cin>>d;
    
    string str=s.substr(n-d);
     s=s.substr(0,n-d);
     str=str+s;
     cout<<str;

    return 0;
}