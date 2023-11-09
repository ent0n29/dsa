#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* Find(Node* root, int data){

}

Node* findMin(Node* root){

}

/*FIND SUCCESSOR*/
Node* getSuccessor(Node* root, int data){
    //search the node O(h)
    Node* current = Find(root, data);
    if (current == NULL)
        return NULL;
    if (current->right != NULL){
        return findMin(current->right);
    }
    else{
        Node* successor = NULL;
        Node* ancestor = root;
        while (ancestor != current){
            if (current->data < ancestor->data){
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else    
                ancestor = ancestor->right;
        }
        return successor;
    }
    
}