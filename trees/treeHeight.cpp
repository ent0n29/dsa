#include <iostream>
using namespace std;

struct bstNode{
    int data;
    bstNode* left;
    bstNode* right;
};

int findHeight(bstNode* root){
    if (root == NULL)
        return -1;
    return max(findHeight(root->left), findHeight(root->right))+1;
}