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

    TreeNode* helper(vector<int> &nums, int first, int last){
        if(first == last) return NULL; 

        int mid = (first+last)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = helper(nums, first, mid);
        temp->right = helper(nums, mid+1, last);

        return temp; 
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size(); 
        if(n==0) return NULL;

        return helper(nums, 0, n); 
    }
};
