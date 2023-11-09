#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head; //global variable pointer to head node

Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;

}
void insertAtHead(int x){
    Node* newNode = getNewNode(x);
    if (head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void insertAtTail(int x){
    Node* newNode = getNewNode(x);
    Node* temp = head;
    if (head == NULL){
        head = newNode;
        return;
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void print(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}
void reverseprint(){
    Node* temp = head;
    if(temp == NULL)
        return;
    //going to last node
    while(temp->next != NULL){
        temp = temp->next;
    }
    cout<<"reverse: ";
    while(temp != NULL){
        cout<<" "<<temp->data;
        temp = temp->prev;
    }
    cout<<endl;
}
int main(){
    head = NULL; // empty list
    insertAtHead(2);
    print();
    reverseprint();
    insertAtHead(4);
    print();
    reverseprint();
    insertAtHead(6);
    print();
    reverseprint();
    insertAtTail(10);
    print();
    reverseprint();
    insertAtTail(10);
    print();
    reverseprint();
    

}
