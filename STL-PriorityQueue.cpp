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
    priority_queue<int>m;
    m.push(9);
    m.push(8);
    m.push(4);
    m.push(1);
    m.push(3);
    int s=m.size();
    for(int i=0;i<s;i++)
    {
        cout<<m.top()<<" ";
        m.pop();
    }
    cout<<endl;
    priority_queue<int>M;
    M.push(98);
    M.push(5);
    M.push(4);
    M.push(8);
    M.push(9);
    int si=M.size();
    for(int i=0;i<si;i++)
    {
        cout<<M.top()<<" ";
        M.pop();
    }
    cout<<endl;
    priority_queue<int>Ma;
    Ma.push(78);
    Ma.push(36);
    Ma.push(14);
    Ma.push(35);
    Ma.push(19);
    int siz=Ma.size();
    for(int i=0;i<siz;i++)
    {
        cout<<Ma.top()<<" ";
        Ma.pop();
    }
    cout<<endl;

}