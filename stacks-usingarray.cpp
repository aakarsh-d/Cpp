#include<iostream>
#define n 5
using namespace std;
int Stack[n];
int top=-1;
void push(int item)
{
    if(top==n-1){
        cout<<"Overflow";
    }
    else
    Stack[++top]=item;
}
int pop()
{
    if(top==-1)    
    cout<<"Underflow";
    return Stack[top--];
}
int peek(){
    if(top==-1)
    cout<<"Underflow";
    return Stack[top];
}
int main()
{
    // int top=-1;
    int choice,a;
    do{
        cout<<"\n1. For Push\n";
        cout<<"\n2. For Pop\n";
        cout<<"\n3. For Top\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Enter no:";
            cin>>a;
            push(a);
            break;
            case 2:
            // int returnn=pop();
            // if (returnn!=0)
            cout<<"Number deleted:"<<pop();
            break;
            case 3:
            // int p=peek();
            // if (p!=0)
            cout<<"Top element:"<<peek();
            break;
            default :
                cout<<"Wrong Choice";
                break;
        }

    }while(choice!=0);
}