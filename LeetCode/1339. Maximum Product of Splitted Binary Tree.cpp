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
    long total_sum =0;
    long max_product =0;
public:
    int maxProduct(TreeNode* root) {
        dfs(root);
        function(root); // this will update the max_product
        return (int)(max_product % 1000000007); 
    }


    void dfs(TreeNode* root){
        if(root== NULL) return;
        dfs(root->left);
        dfs(root->right);

        total_sum += (long)root->val; 
    }

    long function(TreeNode* root){
            if(root == NULL) return 0;
            long l = function(root->left);
            long r = function(root->right);
            long subTreeSum = l+r+root->val; 
            max_product = max(max_product, subTreeSum * (total_sum - subTreeSum)); 
            return subTreeSum; 
    }

};



















