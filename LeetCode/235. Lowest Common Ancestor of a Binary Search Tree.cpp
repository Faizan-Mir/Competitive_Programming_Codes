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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a = p->val;
        int b = q->val;
        TreeNode* curr = root; 

        while(true){
            int x = curr->val;

            if(x>a && x>b) 
            {
                curr = curr->left;
                continue;
            }
            if(x<a && x<b){
                curr = curr->right;
                continue;
            }
            if(a>=x && b<=x){
                return curr;
            }
            if(a<=x && b>= x){
                return curr; 
            }





        }

        return NULL; 
    }
};
