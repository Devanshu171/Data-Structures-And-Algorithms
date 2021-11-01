#include<iostream>
using namespace std;
#define max 101
class stack{
    private:
    int top;
    int *arr;

    public:
    stack(){
        top=-1;
        arr=new int[max];
    }

    void push(int x){
        if(top!=max-1)
        {
            top++;
            arr[top]=x;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>-1){
            cout<<"pop :"<<arr[top]<<endl;
            top--;
        }
        else{
            cout<<"stack under flow"<<endl;
        }
    }
    void Top(){
        if(top>-1)
        cout<<arr[top];
        else
        cout<<"empty stack"<<endl;
    }
    void isEmpty(){
        if(top==-1)
        cout<<"Empty stack"<<endl;
        else
        cout<<"Not empty";
    }
    void isFull(){
        if(top==max-1)
        cout<<"Full"<<endl;
        else
        cout<<"Not full"<<endl;
    }
    void peek(int pos){
        if(top-pos+1>0)
        cout<<arr[top-pos+1];
        else
        cout<<"invalid pos"<<endl;
    }
    void display(){
        for(int i=top;i>=0;i--)
        cout<<arr[i]<<" ";
        cout<<endl;
    }

};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    
    // st.pop();
    // st.Top();
    st.display();
    
    return 0;
}