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
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        queue<pair<TreeNode*, long>> q;
        q.push({root,0}); 

        TreeNode* temp;
        int cnt;
        long m =0;
        long d;
        while(!q.empty()){
            cnt = q.size(); 
            long l,r;
            int mmin = q.front().second; 
            for(int i=0; i<cnt; i++){
                temp = q.front().first;
                d = q.front().second - mmin;
                if(i == 0)
                l = d;
                if(i==cnt-1)
                r = d;
                q.pop();

                if(temp->left != NULL)
                q.push({temp->left, 2*d+1}); 
                if(temp->right != NULL)
                q.push({temp->right, 2*d +2});

            }
            m = max(m,r-l+1); 
        }




        return m; 
    }
};
