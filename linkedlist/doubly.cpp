#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node (int d){
        data = d;
        next = nullptr;
        prev = nullptr;
    }
};
void printList(Node *head){
    Node *curr = head;
    while(curr != nullptr){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}
Node *insertBegin(Node *head, int x){
    Node *newNode = new Node(x);
    newNode -> next = head;
    if(head != nullptr)
        head -> prev = newNode;
    return newNode;
}
int main()
{
    Node *head = new Node(10);
    Node *t1 = new Node(20);
    Node *t2 = new Node(30);
    head -> next = t1;
    t1 -> prev = head;
    t1 -> next = t2;
    t2 -> prev = t1;
    head = insertBegin(head, 40);
    printList(head);
    return 0;
}

