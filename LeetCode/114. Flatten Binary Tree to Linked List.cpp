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
     queue<TreeNode*> q;

     void preorder(TreeNode* root){
         if(root == NULL) return;

         q.push(root);
         preorder(root->left);
         preorder(root->right);
     }

    void flatten(TreeNode* root) {
       if(root == NULL) return;
        TreeNode* temp;

       preorder(root); 
        while(!q.empty()){
            temp = q.front();
            q.pop();
            if(q.size()==0){
                temp->left = NULL;
                temp->right = NULL;
                break; 
            }
            temp->left = NULL;
            temp->right = q.front(); 
        }


    }
};
