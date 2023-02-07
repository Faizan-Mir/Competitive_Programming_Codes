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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> sol;
        if(root == NULL) return sol;

        queue<pair<TreeNode*, pair<int, int>>> q;
        map<int, map<int, multiset<int>>> mp; // hd, then level, then value
        q.push({root, {0,0}});
        TreeNode* curr;
        int d;
        int l;

        while(!q.empty()){
            curr = q.front().first;
            d = q.front().second.first;
            l = q.front().second.second;
            q.pop();
           // mp.insert({d,{l,curr->val}});
            mp[d][l].insert(curr->val); 
            if(curr->left != NULL)
            q.push({curr->left, {d-1,l+1}});
            if(curr->right != NULL)
            q.push({curr->right, {d+1, l+1}});
        }


        for(auto i: mp){
            vector<int> col;
            col.clear(); 
            for(auto j:i.second){
                for(auto k:j.second){
                    col.push_back(k); 
                }
                
            }
            sol.push_back(col); 
        }
    return sol; 
    }
};
