/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        int left,right;
        if(!root)
        {
            return 0;
        }
        else
        {
            left = minDepth(root->left);
            right = minDepth(root->right);
            if(root->left==NULL&&root->right!=NULL)
            {
                right++;
                return right;
            }
            else if(root->left!=NULL&&root->right==NULL)
            {
                left++;
                return left;
            }
            else
            {
                return (left<right)?left+1:right+1;
            }
        }
    }
};
