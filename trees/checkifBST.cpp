#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

bool issubtreeLesser(Node* root, int value){
    if (root == NULL)
        return true;
    if (root->data <= value
        && issubtreeLesser(root->left, value)
        && issubtreeLesser(root->right, value))
        return true;
    else 
        return false;
}

bool issubtreeGreater(Node* root, int value){
    if (root == NULL)
        return true;
    if (root->data > value
        && issubtreeGreater(root->left, value)
        && issubtreeGreater(root->right, value))
        return true;
    else
        return false;
}

bool isBST(Node* root){
    //return true if BST, else false
    if (root == NULL)
        return true;
    if (issubtreeLesser(root->left, root->data)
        && issubtreeGreater(root->right, root->data)
        && isBST(root->left)
        && isBST(root->right))
        return true;
    else    
        return false;
}