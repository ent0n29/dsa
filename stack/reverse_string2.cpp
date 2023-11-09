/* USE STACK TO REVERSE A LINKED LIST*/
#include <iostream>
#include <stack>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;

void reverse(){
    if(head==NULL)
        return;
    stack<Node*> s;
    Node* temp = head;
    while(temp!=NULL){
        s.push(temp);
        temp = temp->next;
    }
    temp=s.top();
    head=temp;
    s.pop();
    while(!s.empty()){
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}


