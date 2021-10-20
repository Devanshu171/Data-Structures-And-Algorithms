#include<iostream>
#include<map>
using namespace std;

int main()
{ 
    map<int,string>m;
    m[1]="abc";

    m.insert({4,"agf"});
    // map<int,string> :: iterator it;


// for(it = m.begin(); it!=m.end();++it)
// {
//     cout<<(*it).first<<" "<< (*it).second;
// }
// cout<<m.size()<<'\n ';
// for(auto &it:m)
// {
//     cout<<it.first<<" "<<it.second<<endl;
// }
  if(m.find(1)!=m.end())
    cout<<"found"<<" "<<m[1];

    else
    cout<<"no value";
    return 0;
}