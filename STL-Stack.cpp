#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    //  cout<<"Size :"<<s.size()<<endl; 
    stack<string> st;
    st.push("Deku");
    st.push("Mr. ");   
    st.push("hey");    

    cout<<"Top element:"<<st.top()<<endl;    
    cout<<"Size :"<<st.size()<<endl; 
    int sqq=st.size();
    for(int i=0;i<=sqq;i++){
        cout<<st.top()<<" ";
        st.pop();
    }

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
   
     cout<<"Size :"<<st.size()<<endl; 
    stack<string> str;
    str.push("Dj");
    str.push("Mr. ");   
    str.push("hey!");    

    cout<<"Top element:"<<str.top()<<endl;    
    cout<<"Size :"<<str.size()<<endl; 
    int qq=str.size();
    for(int i=0;i<=qq;i++){
        cout<<str.top()<<" ";
        str.pop();
    }
}