#include <iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;
};

int findMin(bstNode* root){

    if (root == NULL)
        cout<<"empty tree"<<endl;
        return -1;

    bstNode* current = root;

    //check if left child exists
    while(current->left != NULL){
        current = current->left;
    }
    return current->data;
}

int findMax(bstNode* root){
    if (root == NULL)
        cout<<"empty tree"<<endl;
        return -1;
    bstNode* current = root;
    while(current->right != NULL){
        current = current->right;
    }
    return current->data;
}

/*FIND MIN & MAX USING RECURSION*/

int recFindMin(bstNode* root){
    if (root == NULL)
        return -1;
    else if (root->left == NULL)
        return root->data;
    return recFindMin(root->left);
}