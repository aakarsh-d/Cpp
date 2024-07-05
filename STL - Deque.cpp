#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    d.push_back(8);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);

    for(int i:dq)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<"EMPTY :"<<dq.empty();
    cout<<"Before erase : "<<dq.size()<<endl;
    dq.erase(dq.begin(),dq.begin()+1);
    cout<<"After erase :"<<d.size()<<endl;
    for(int i:dq)
    {
        cout<<i<< " ";
    }
}