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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> sol;
        if(root== NULL) return sol;
        queue<TreeNode*> q;
        q.push(root);

        TreeNode* curr;
        int cnt;
        vector<int> temp; 

        while(!q.empty()){
            
            cnt = q.size();
            temp.clear(); 
            for(int i=0; i<cnt; i++){
                curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left != NULL)
                q.push(curr->left);
                if(curr->right != NULL)
                q.push(curr->right); 
            }
            sol.push_back(temp);
        }
    vector<vector<int>> sol2(sol.size());
        for(int i=0; i<sol.size(); i++){
                sol2[i]=sol[sol.size()-i-1];
        }

        return sol2; 
    }
};
