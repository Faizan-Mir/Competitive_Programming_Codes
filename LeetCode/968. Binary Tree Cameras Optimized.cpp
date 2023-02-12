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
    int cam =0;
    int minCameraCover(TreeNode* root) {
        if(root== NULL) return cam;

        return dfs(root)? cam: cam+1; 

    }

    int dfs(TreeNode* root){
        if(root == NULL) return 1;
        int l = dfs(root->left);
        int r = dfs(root->right);

        if(l==0 || r==0){
            cam++;
            return 2;
        }
        else if(l==2 || r==2){
            return 1;
        }
        else return 0; 
    }
};
