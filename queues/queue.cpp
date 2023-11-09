/* QUEUE USING LINKED LIST*/
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head = NULL;
Node* tail = NULL;

void enqueue(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (head == NULL && tail == NULL){
        head = tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void dequeue(){
    Node* temp = head;
    if (head == NULL)
        return;
    if (head == tail){
        head = tail = NULL;
    }
    else{
        head = head->next;
    }
    delete temp;
}