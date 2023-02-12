/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxi =INT_MIN; 

    int helper( TreeNode* root){
        if(root == NULL) return 0;

        int l = helper(root->left);
        int r = helper(root->right);
        if(l<0) l=0;
        if(r<0) r=0; 

        maxi = max(maxi, root->val + l+ r);

        return root->val + max(l,r); 
    }
    int maxPathSum(TreeNode* root) {
        if(root == NULL) return maxi;

        helper(root);
        return maxi; 
    }
};
