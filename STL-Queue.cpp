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

}