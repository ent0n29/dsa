#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

/******DELETE NODE FROM A BST*******/

Node* findMin(Node* root){

}

Node* deleteNode(Node* root, int data){
    if (root == NULL)
        return NULL;
    else if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else{
        if (root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
            return root;
        }
        else if (root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else{
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}