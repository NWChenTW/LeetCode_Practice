int maxDepth(struct TreeNode* root){
    if (root == NULL)
        return 0;
    else
    {
        int lheight = maxDepth(root->left);
        int rheight = maxDepth(root->right);
        if(lheight>rheight)
            return lheight+1;
        else
            return rheight+1;
    }
}