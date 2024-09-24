#include<iostream>
using namespace std;

class node {
public:
    int data;
    node *link;
};

class LinkedList {
public:
    node *head;
    LinkedList() {
        head = NULL;
    }
    void create();
    void display();
    void Insert_Last(int x);
    void Insert_begin(int x);
};


void LinkedList::Insert_begin(int x) {
    node *temp = new node;
    temp->data = x;
    temp->link = head;
    head = temp;  
}


void LinkedList::display() {
    node *t = head;
    while (t != NULL) {
        cout << t->data << "-->";
        t = t->link;
    }
    cout << "NULL" << endl;
}


void LinkedList::create() {
    node *temp = new node;
    int n;
    cout << "Enter the data: ";
    cin >> n;
    temp->data = n;
    temp->link = NULL;
    if (head == NULL)
        head = temp;
    else {
        node *t = head;
        while (t->link != NULL)
            t = t->link;
        t->link = temp;
    }
}

int main() {
    LinkedList ll;
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll.create();
    }

    ll.display();  
    return 0;
}
