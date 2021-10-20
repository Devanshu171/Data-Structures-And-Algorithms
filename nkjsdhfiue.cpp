#include<iostream>
using namespace std;

int main(){
    int steps=8;
    string path="UDDDUDUU";
    int a=0,count=0;
for(int i=0;i<steps;i++)
{
    if(path[i]=='U') a++;
    if(path[i]=='D') a--;
    if(a==0) count++;
}
cout<< count;
    return 0;
}