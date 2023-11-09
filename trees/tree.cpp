#include <iostream>
using namespace std;

/*** BINARY SEARCH TREE ***/

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
Node* insert(Node* root, int data){
    if(root == NULL){
        root = getNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = insert(root->left, data);
    }
    else{
        root->right = insert(root->right, data);
    }
    return root;
}
bool search(Node* root, int data){
    if (root == NULL)
        return false;
    if (root->data == data)
        return true;
    else if (data <= root->data)
        return search(root->left, data);
    else
        return search(root->right, data);
}

int main(){
    Node* root = NULL; //empty tree
    root = insert(root, 15);root = insert(root, 10);root = insert(root, 20);
    root = insert(root, 25);root = insert(root, 8);root = insert(root, 12);
    int number;
    cout<<"enter number: "<<endl;
    cin>>number;
    if(search(root, number) == true)
        cout<<"found"<<endl;
    else    
        cout<<"not found";
}
