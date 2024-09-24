// #include<iostream>
// using namespace std;
// int rear=-1;
// int front=-1;
// const int n=5;
// int q[n];
// void enque(int item)
// {
//     if(front ==rear+1 || (front==0 && rear==n-1))
//     {
//         cout<<"Overflow";
//     }
//     else if(front==-1)
//     {
//         // rear++;
//         front++;
//         q[++rear]=item;
//     }
//     else if(rear==n-1)
//     {
//         rear=0;
//         q[rear]=item;
//     }
//     else
//     {
//         // rear++;
//         q[++rear]=item;
//     }
// }
// int_fast32_t deque()
// {
//     if(front==-1)
//     {
//         cout<<"Underflow";
//     }
//     else 
//     {
//         int item=q[front];
//         cout<<"Deleted item:"<<q;
//         if(front==rear)
//         {
//             front=rear=-1;
//         }
//         else if(front==n-1)
//         {
//             front=0;
//         }
//         else front++;
//         return item;
//     }
// }
// int main()
// {
// int choice,a;

//     do{
//         cout<<"\n1. For Enque\n";
//         cout<<"\n2. For Dequeu\n";
//         cin>>choice;
//         switch(choice)
//         {
//             case 1:
//             cout<<"Enter no:";
//             cin>>a;
//             enque(a);
//             break;
//             case 2:
//             deque();
//             break;
//             default :
//                 cout<<"Wrong Choice";
//                 break;
//         }

//     }while(choice!=0);
//     return 0;
// }











#include<iostream>
using namespace std;

int rear = -1;
int front = -1;
const int n = 5;
int q[n];

void enque(int item) {
    if ((front == 0 && rear == n - 1) || (front == rear + 1)) {
        cout << "Overflow" << endl;
    } else if (front == -1) {
        front = rear = 0;
        q[rear] = item;
    } else if (rear == n - 1) {
        rear = 0;
        q[rear] = item;
    } else {
        rear++;
        q[rear] = item;
    }
}

int deque() {
    if (front == -1) {
        cout << "Underflow" << endl;
        return -1; 
    } else {
        int item = q[front];
        cout << "Deleted item: " << item << endl;
        if (front == rear) {
            front = rear = -1; // Queue is empty
        } else if (front == n - 1) {
            front = 0;
        } else {
            front++;
        }
        return item;
    }
}

int main() {
    int choice, a;

    do {
        cout << "\n1. For Enque\n";
        cout << "2. For Dequeu\n";
        cout << "0. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter no: ";
                cin >> a;
                enque(a);
                break;
            case 2:
                deque();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Wrong Choice" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
