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
    priority_queue<int>maxiI;
    maxiI.push(83);
    maxiI.push(12);
    maxiI.push(4);
    maxiI.push(9);
    int nO=maxiI.size();
    for(int i=0;i<nO;i++)
    {
        cout<<maxiI.top()<<" ";
        maxiI.pop();
    }
    cout<<endl;
     priority_queue<int>max;
    max.push(5);
    max.push(2);
    max.push(4);
    max.push(3);
    int size=max.size();
    for(int i=0;i<size;i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;
    
}