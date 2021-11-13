#include<iostream>
#include<queue>
#include<stack>
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
//           (1)
//         /     \
//     (2)         (3)
//   /     \      /     \
// (4)     (5)  (6)      (7)
 void preorder(NodeTree *root){
   if(root==NULL)
   return;
   cout<<root->data<<" ";
   preorder(root->lchild);
   preorder(root->rchild);
 }   
 void inorder(NodeTree* root){
   if(root==NULL)
   return;
   inorder(root->lchild);
   cout<<root->data<<" ";
   inorder(root->rchild);
 }  
 void postorder(NodeTree *root){
   if(root==NULL)
   return;
   postorder(root->lchild);
   postorder(root->rchild);
   cout<<root->data<<" ";
 } 
 void levelorder(NodeTree *root) {
   if(root==NULL)
   return;
   queue<NodeTree*>q;
   q.push(root);
   q.push(NULL);

   while(!q.empty()){
     NodeTree *t=q.front();
     q.pop();
     if(t!=NULL){
       cout<<t->data<<" ";
       if(t->lchild)
       q.push(t->lchild);
       if(t->rchild)
       q.push(t->rchild);

     }
     else if(!q.empty())
     q.push(NULL);
   }
 }
 void itpreorder(NodeTree *t){
  
   if(t==NULL)
   return;

  stack<NodeTree*>st;
  while(t!=NULL || !st.empty()){
    if(t!=NULL){
        cout<<t->data<<" ";
        st.push(t);
        t=t->lchild;
    }
    else{
      t=st.top();
      st.pop();
      t=t->rchild;
    }
  }


       
 }
 void itinorder(NodeTree *t){
  
   if(t==NULL)
   return;

  stack<NodeTree*>st;
  while(t!=NULL || !st.empty()){
    if(t!=NULL){
      
        st.push(t);
        t=t->lchild;
    }
    
    else{
      t=st.top();
      cout<<t->data<<" ";
      st.pop();
      t=t->rchild;
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
cout<<"Pre-Order : ";
  preorder(root);
  cout<<'\n';
  cout<<"IN-Order : ";
  inorder(root);
  cout<<'\n';
  cout<<"Post-Order : ";
  postorder(root);
  cout<<'\n';
  cout<<"Level-Order : ";
  levelorder(root);
  cout<<'\n';
  cout<<"Itpre-Order : ";
  itpreorder(root);
  cout<<'\n';
  cout<<"Itin-Order : ";
  itinorder(root);
  
  return 0;
}