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

   TreeNode* find(TreeNode* root, int x){
       if(root == NULL) return NULL; 
       queue<TreeNode*> q;
       q.push(root);
       TreeNode* curr;

       while(!q.empty()){
           curr = q.front();
           q.pop();
           if(curr->val== x) return curr;
           if(curr->left != NULL)
            q.push(curr->left);
           if(curr->right != NULL)
           q.push(curr->right);

       }

       return NULL;
   }

   int size(TreeNode* root){
       if(root == NULL) return 0;

       return 1+size(root->left) + size(root->right); 
   }

    int max(int a, int b){
        if(a>b) return a;
        
        return b; 
    }
    bool btreeGameWinningMove(TreeNode* root, int n, int x) {
        TreeNode* main = find(root, x);
        // now you have the main node which contains x. 


        int size_left = size(main->left);
        int size_right = size(main->right);
        int size_parent = n-size_left - size_right -1; 

        int m; 

        if(size_left > size_right){
                m = max(size_left, size_parent);
        }
        else{
            m = max(size_right, size_parent);
        }

        if(m>(n/2)) return true;

        return false; 

    }
};
