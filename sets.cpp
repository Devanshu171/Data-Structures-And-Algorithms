#include<iostream>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<list>
#include<unordered_set>
using namespace std;

int main(){
  int  arr[]={2,5,2,1,5}; // 3 unique elements
  set<int>st;// only stores unique elements in sorted manner(asseinding order)
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      st.insert(x); //O(logn)

  }
  // -> {1,2,5}
    // erase funcationality
    // st ->{2,5}
    st.erase(st.begin());
    st.erase(5); // ->delete value 5 element

    // set<int> st1={1,2,23,4,5};
    // set<int> st2(st1);
    st.count(2);
    auto it= st.find(7);    
    cout<<st.size();
    for(auto it:st)
    {
        cout<<it<<" ";
    }

    unordered_set<int> st;
    // average time complexity is O(1)
    // but the worst case is linear in nature
     
     //----------> Multiset
     /// can store duplicate element
     // O(logn)
     multiset<int> ms;
     ms.insert(1);
     ms.insert(1);
     ms.insert(2);
     ms.insert(2);
     ms.insert(3);
     // st-> {1,1,2,2,3} stores in sortd fashion 

    // key value
    // raj -> 27
    // hima -> 31
    // sandeep ->89

    //-----map
    // stores only unique keys
    // tc-> logn
        map<string, int> mpp;
        mpp["raj"]= 27;
        mpp["hima"]= 31;
        mpp["sandeep"]= 67;
        mpp["raj"]= 29;
        // will store raj=29 will overewrite
        mpp.erase("raj");  

     // printing map

     for(auto it: mpp)
     {
         cout<<it.first<<" "<<it.second<<endl;

     }

    for(auto it=mpp.begin();it!=mpp.end();it++)
    {
        cout<<it->first<<" "<<it->second;
            }

        //-> pair class

        pair<int, int> pr={1,2};
        pair<pair<int,int>,int>pr1={{1,2},2};
    cout<<pr1.first.second<<endl;

    // stack
    stack<int> st1;
    // pop
    // top
    // size
    // empty
    //push
    st1.push(2);
    st1.push(4);
    st1.push(3);
    st1.push(1);
    cout<<st1.top(); // -> prints 1
    st1.pop();// deletes the last entered element->1
    cout<<st1.top(); // -> prints 3
    st1.pop();// deletes the last entered element->4

// this delete the entire stack
bool flag =st1.empty();
while(!st1.empty())
{
    st1.pop();
}
cout<<st1.size();
stack<int>st;
cout<<st.top()<<endl;

///---> queue // fifo operation first in first out
//push
//front
//pop
//size
queue<int>q;
q.push(1);
q.push(5);
q.push(3);
q.push(6);

cout<<q.front(); //print-> 1
q.pop();
cout<<q.front(); // print->5


// -> priority_queue
// stores in sorted order
// tc constant
priority_queue<int> pq;
//push
//pop
//top 
//size
//empty
// stores in decending order
// max on top
pq.push(1);
pq.push(5);
pq.push(2);
pq.push(6);

cout<<pq.top(); //print -> 6
pq.pop();
cout<<pq.top(); //print ->5 

pq.push(-1);
pq.push(-5);
pq.push(-2);
pq.push(-6);
cout<<-1*pq.top()<<endl;

priority_queue<int,vector<int>,greater<int>>> pq;

     list<int> ls;

      ls.push_front(1);
      ls.push_front(2);
      ls.push_front(3);
      ls.push_front(4);
      ls.remove(2); //--> O(1) operation

    // given N elements ,print the elements that occurs maximum
    // numbers of times
    //input
    //5
    // 1 3 3 3 2

    // output
    //3

    int n;
    cin>>n;
    map<int,int> mpp;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        mpp[x]++; 
        if(mpp[x]>mpp[maxi])
        {
            maxi=x;
        }
        
    }
  cout<< x <<endl;    

///-> given N elements ,print all elements in sorted  order

int n;
cin>>n;
multiset<int>ms;
for(int i=0; i<n; i++)
{
    int x;
    cin>>x;
    ms.insert
}

for(auto it:ms)
{
    cout<<it<<" ";
}





















    return 0;

}