#include<iostream>
#include<stack>
#include<vector>
using namespace std;
struct NodeTree{
  NodeTree *lchild;
  int data;
  NodeTree *rchild;
  NodeTree(int x){
    data=x;
    lchild=rchild=NULL;
  }

};

void PreInPostTraversal(NodeTree*root,vector<int>&pre,vector<int>&in,vector<int>&post){
  stack<pair<NodeTree*,int>>st;
  st.push(make_pair(root,1));

  while(!st.empty()){
    if(st.top().second==1){
      pre.push_back(st.top().first->data);
      st.top().second++;
      if(st.top().first->lchild) st.push(make_pair(st.top().first->lchild,1));
    }
    else if(st.top().second==2){
      in.push_back(st.top().first->data);
      st.top().second++;
      if(st.top().first->rchild) st.push(make_pair(st.top().first->rchild,1));
    }
    else{
      post.push_back(st.top().first->data);
      st.pop();
    }
     
    }
  }



int main(){
   struct NodeTree* root=new NodeTree(1);
  root->lchild=new NodeTree(2);
  root->rchild=new NodeTree(3);
  root->lchild->lchild=new NodeTree(4);
  root->lchild->rchild=new NodeTree(5);
  root->rchild->lchild=new NodeTree(6);
  root->rchild->rchild=new NodeTree(7);

    vector<int>pre;
    vector<int>in;
    vector<int>post;
  PreInPostTraversal(root,pre,in,post);
    cout<<"Pre-Order : ";
    for(auto it:pre){
      cout<<it<<" ";
    }
    cout<<endl;
    cout<<"In-Order : ";
    for(auto it:in){
      cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Post-Order : ";
    for(auto it:post){
      cout<<it<<" ";
    }



  return 0;
}