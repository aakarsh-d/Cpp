#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(8);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    for(int i:dq)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<"EMPTY :"<<dq.empty();
    cout<<"Before erase : "<<dq.size()<<endl;
    dq.erase(dq.begin(),dq.begin()+1);
    cout<<"After erase :"<<dq.size()<<endl;
    for(int i:dq)
    {
        cout<<i<< " ";
    }
    deque<int> d;
    d.push_back(22);
    d.push_back(73);
    d.push_back(36);
    d.push_back(52);
    for(int i:d)
    {
        cout<<i<< " ";
    }
    cout<<endl;
    deque<int> dd;
    dd.push_back(2);
    dd.push_back(7);
    dd.push_back(3);
    dd.push_back(5);
    for(int i:dd)
    {
        cout<<i<< " ";
    }
}