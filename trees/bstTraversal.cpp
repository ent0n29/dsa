#include <iostream>
#include <queue>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;
};

/* =========TREE TRAVERSAL===========
   breadth-first -> BFS
   depth-first   -> DFS
   =================================*/


/* ===============BFS=================
   level order is a breadth first
   method to visit nodes in a tree.
   =================================*/
void levelOrder(Node* root){
    if(root == NULL)
        return;
    queue<Node*> Q;
    Q.push(root);
    //while there is at least one discovered node
    while(!Q.empty()){
        Node* current = Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL)
            Q.push(current->left);
        if(current->right != NULL)
            Q.push(current->right);
        Q.pop(); //removing element at front
    }
}

/* ===========TIME COMPLEXITY===========
   time complexity of level order trave-
   rsal is O(n). The space complexity
   for the worst case is O(n) too, at 
   best case is O(1).
   ===================================*/

/* ================DFS==================
   nodes can be visited in 3 different
   ways: preorder, inorder, postorder.
   ===================================*/

/*PRE ORDER*/
void preorder(Node* root){
    if (root == NULL)
        return;
    cout<<" "<<root->data;
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if (root == NULL)
        return;
    inorder(root->left);
    cout<<" "<<root->data;
    inorder(root->right);
}

void postorder(Node* root){
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<" "<<root->data;
}

