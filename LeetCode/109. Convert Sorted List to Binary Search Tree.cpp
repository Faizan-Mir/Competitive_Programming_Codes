/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int> v;
    TreeNode* helper(int first, int last){
        if(first== last) return NULL;
        int mid = (first+last)/2;
        TreeNode* temp = new TreeNode(v[mid]);
        temp->left = helper(first, mid);
        temp->right = helper(mid+1, last);
        return temp; 
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp = head;

        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }

        int n = v.size(); 
       return helper(0,n); 
    }
};
