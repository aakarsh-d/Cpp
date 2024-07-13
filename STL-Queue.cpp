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

}