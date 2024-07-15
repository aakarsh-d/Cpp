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
        cout<<i<<" "<<endl;
    }

    vector<int> a(5,100);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector <int> last(a);
    for(int i:last)
    {
        cout<<i<<" ";

    }    
    cout<<endl;
    vector<int> b(a);
    for(int i:a)
    {
        cout<<i<<" ";
    }
    vector<int> c(b);
    for(int i:c)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> s;
    s.push_back(78);
    s.push_back(89);
    s.push_back(45);
    s.push_back(13);
    for(int i:s)
    {
        cout<<i<<" ";
    }
}