#include<iostream>
using namespace std;

int main(){
    string s="devanshu";
    s.erase(s.begin()+s.size()-1);
    cout<<s;
    return 0;
}