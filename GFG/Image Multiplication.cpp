class Solution
{
    long long ans =0;
    long long m = 1000000007; 
    
    public:
    
    void helper(Node* a, Node* b){
        if(a==NULL || b== NULL) return;
        
        ans = (ans + (a->data * b->data))%m;
        
        helper(a->left, b->right);
        helper(a->right, b->left); 
    }
    
    long long imgMultiply(Node *root)
    {
        if(root == NULL) return 0;
        
        ans = root->data * root->data; 
        
        helper(root->left, root->right);
        
        return ans;
    }
};
