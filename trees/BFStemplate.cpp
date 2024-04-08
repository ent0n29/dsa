void printAllNodes(TreeNode* root) {
    queue<TreeNode*> queue;
    queue.push(root);
    
    while (!queue.empty()) {
        int nodesInCurrentLevel = queue.size();
        // do some logic here for the current level

        for (int i = 0; i < nodesInCurrentLevel; i++) {
            TreeNode* node = queue.front();
            queue.pop();

            // do some logic here on the current node
            cout << node->val << endl;
            
            // put the next level onto the queue
            if (node->left) {
                queue.push(node->left);
            }
            
            if (node->right) {
                queue.push(node->right);
            }
        }
    }
}
