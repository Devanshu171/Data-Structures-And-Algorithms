#include<iostream>
using namespace std;

 void print1(); 
 void print2(); 
 void print3(); 
 void print4(); 
void print()
{
    cout<<"hello world"<<'\n';
    print1();
}

void print1()
{
    cout<<"hello world"<<'\n';
    print2();
}
void print2()
{
    cout<<"hello world"<<'\n';
    print3();
}
void print3() 
{
    cout<<"hello world"<<'\n';
    print4();
}
void print4() 
{
    cout<<"hello world"<<'\n';
}
int main(){
print(); 

    return 0;
}
    
