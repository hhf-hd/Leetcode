class Solution {
public:
    int maxDepth(TreeNode* root) {
        int left,right;
        if(!root)
        {
            return 0;
        }
        else
        {
            left = maxDepth(root->left);
            right = maxDepth(root->right);
            return (left>right)?left+1:right+1;
        }
    }
};
