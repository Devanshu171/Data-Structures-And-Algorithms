#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;

};
struct Node* head; // global variable , can be accessed anywhere 
void insert(int x);
void print();
int main(){
     
     head=NULL; // empty list
      
      cout<<"How many numbers"<<endl;
      int n,x;
      cin>>n;

      for(int i=0;i<n;i++)
      {
          cout<<"Enter the number"<<'\n';
          cin>>x;
          insert(x);
          print();
      }

    return 0;
}