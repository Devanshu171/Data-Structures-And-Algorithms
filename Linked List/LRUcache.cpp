#include<iostream>
#include<unordered_map>
using namespace std;
#define capacity 3
struct Node{
  Node* prev;
  int data;
  Node*next;
};
 Node *dtail;
 Node *dhead;
unordered_map<int,Node*>mpp;
 void create(){
   dhead=new Node;
   dtail=new Node;
   dhead->data=dtail->data=-1;
   dhead->prev=dtail->next=NULL;
   dhead->next=dtail;
   dtail->prev=dhead;
}
void put(int key,int value){
    
  if(mpp.size()<capacity){
    if(mpp.find(key)==mpp.end()){
      Node *t=new Node;
       t->data=value;
       mpp[key]=t;
       t->prev=dhead;
       t->next=dhead->next;
       dhead->next=t;
       t->next->prev=t;
    }
    else{
      Node *t=mpp[key];
      t->next->prev=t->prev;
      t->prev->next=t->next;
      delete t;
      t=new Node;
       t->data=value;
       mpp[key]=t;
       t->prev=dhead;
       t->next=dhead->next;
       dhead->next=t;
       t->next->prev=t; 
    }
  }
  else{
    mpp.erase();
    Node *k=dtail->prev;
     k->next->prev=k->prev;
      k->prev->next=k->next;
      delete k;
      
        Node *t=new Node;
       t->data=value;
       mpp[key]=t;
       t->prev=dhead;
       t->next=dhead->next;
       dhead->next=t;
       t->next->prev=t; 
  }
}

int get(int key){
  if(mpp.find(key)!=mpp.end()){
    int x=mpp[key]->data;
  
       Node *t=mpp[key];
      t->next->prev=t->prev;
      t->prev->next=t->next;
      delete t;
      mpp.erase(key);
      put(key,x);
       return x;
  }
  else return -1;

}



int main(){
  create();
  put(1,10);
  put(3,15);
  put(2,12);
  put(4,42);
  cout<<get(1);
  



  return 0;
}