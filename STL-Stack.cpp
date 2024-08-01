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
       stack<string> stri;
    stri.push("Dj");
    stri.push("Mr. ");   
    stri.push("hey!");    

    cout<<"Top element:"<<stri.top()<<endl;    
    cout<<"Size :"<<stri.size()<<endl; 
    int qqi=stri.size();
    for(int i=0;i<=qqi;i++){
        cout<<stri.top()<<" ";
        stri.pop();
    }
    stack<string> strinn;
    strinn.push("Dj");
    strinn.push("Mr. ");   
    strinn.push("hey!");    

    cout<<"Top element:"<<strinn.top()<<endl;    
    cout<<"Size :"<<strinn.size()<<endl; 
    int qnni=strinn.size();
    for(int i=0;i<=qnni;i++){
        cout<<strinn.top()<<" ";
        strinn.pop();
    }
    }
}