#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = nullptr;
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
    return newNode;
}
Node *insertLast(Node *head, int x){
    Node *newNode = new Node(x);
    if(head == nullptr)
        return newNode;
    Node *curr = head;
    while (curr -> next != nullptr)
        curr = curr -> next;
    curr -> next = newNode;
    return head;
}
int main(){
    Node *head = new Node(10);
    Node *t1 = new Node(20);
    Node *t2 = new Node(30);
    head -> next = t1;
    t1 -> next = t2;
    head = insertBegin(head, 40);
    insertLast(head, 50);
    printList(head);
    return 0;
}
