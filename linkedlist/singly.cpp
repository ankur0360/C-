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
int main(){
    Node *head = new Node(10);
    Node *t1 = new Node(20);
    Node *t2 = new Node(30);
    head -> next = t1;
    t1 -> next = t2;
    printList(head);
    return 0;
}
