# include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;
    v.push_back(2);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity:"<<v.capacity()<<endl;
    cout<<"size:"<<v.size()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
}