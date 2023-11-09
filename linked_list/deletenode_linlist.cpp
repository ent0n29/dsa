#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;   //store pointer to first node


/* INSERT AT HEAD */
void insert(int data)
{
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;

}
void print()
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
}
void deleteNode(int n) //delete node at position n
{

    Node* temp1 = head;
    if (n==1){
        head = temp1->next; //head points to second node
        delete temp1;
        return;
    }
    for(int i=0;i<n-2;i++){ //temp1 points to (n-1)th node
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next; //nth node
    temp1->next = temp2->next; //n+1 th node
    delete temp2;

}
int main(){
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(5);         // list: 2, 4, 6, 5
    insert(1);
    insert(1);
    print();
    int n;
    cout<<"enter a position: "<<endl;
    cin>>n;
    deleteNode(n);
    print();
}
