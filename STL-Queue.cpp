#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(5);
    q.push(4);
    q.push(6);
    cout<<"Size before pop"<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    cout<<"Size after pop"<<q.size();
    queue<int>qq;
    qq.push(145);
    qq.push(24);
    qq.push(63);
    cout<<"Size before pop"<<qq.size()<<endl;
    cout<<qq.front()<<endl;
    qq.pop();
    cout<<qq.front()<<endl;
    cout<<"Size after pop"<<qq.size();
    queue<int>qu;
    qu.push(95);
    qu.push(88);
    qu.push(12);
    cout<<"Size before pop"<<qu.size()<<endl;
    cout<<qu.front()<<endl;
    qu.pop();
    cout<<qu.front()<<endl;
    cout<<"Size after pop"<<qu.size();
     queue<int>que;
    que.push(95);
    que.push(88);
    que.push(12);
    cout<<"Size before pop"<<que.size()<<endl;
    cout<<que.front()<<endl;
    que.pop();
    cout<<que.front()<<endl;
    cout<<"Size after pop"<<que.size();
     
}