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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> sol;
        if(root==NULL) return sol; 
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* curr;
        int cnt; 

        while(!q.empty()){
            cnt = q.size();
            
            for(int i=0; i<cnt; i++){
                curr = q.front(); 
                q.pop();
                if(i==cnt-1){
                    sol.push_back(curr->val);
                }
                if(curr->left != NULL)
                q.push(curr->left);
                if(curr->right !=NULL)
                q.push(curr->right);
            }

        }

        return sol; 
    }
};
