#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int>maxi;
    maxi.push(78);
    maxi.push(2);
    maxi.push(45);
    maxi.push(96);
    int n=maxi.size();
    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
}