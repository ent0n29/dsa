#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node* top = NULL; //empty stack

void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}
void pop(){
    Node* temp;
    if(top == NULL)
        return;
    temp = top;
    top = top->link;
    delete temp;
}

