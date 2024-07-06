#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> s;
    s.push("hell");
    s.push("in");   
    s.push("Lost");    

    cout<<"Top element:"<<s.top()<<endl;    
    cout<<"Size :"<<s.size()<<endl; 
    int sq=s.size();
    for(int i=0;i<=sq;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    // s.pop();
    // cout<<"Top element:"<<s.top()<<endl;   
    cout<<"Size :"<<s.size()<<endl; 
}