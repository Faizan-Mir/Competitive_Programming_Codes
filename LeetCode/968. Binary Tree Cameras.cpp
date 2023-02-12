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
    unordered_set<TreeNode*> s;
    int minCameraCover(TreeNode* root) {
        if(root== NULL) return cam;
        s.insert(NULL);
        dfs(root, NULL);
         
        return cam; 
    }

    void dfs(TreeNode* root, TreeNode* parent){
        if(root == NULL) return;

        dfs(root->left, root);
        dfs(root->right, root);

        if((parent == NULL && !s.count(root)) || !s.count(root->left) || !s.count(root->right)){
            cam++;
            s.insert(root);
            s.insert(parent);
            s.insert(root->left);
            s.insert(root->right); 
        }
    }
};
