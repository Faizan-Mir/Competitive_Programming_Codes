class Solution {
public:

    void left(Node * root, vector<int> & v){
        if(root == NULL)
        return;
        if(root->left == NULL && root->right == NULL) 
        return;
        
        v.push_back(root->data); 
        
        if(root->left == NULL)
        left(root->right,v);
        
        left(root->left,v);
    }
    
    
    void leaf(Node * root, vector<int> &v){
        // inorder traversal
        if(root== NULL)
        return;
        
        leaf(root->left, v);
        
        if(root->left == NULL && root->right == NULL)
        v.push_back(root->data);
        
        leaf(root->right, v);
        
        
        
    }
    
    void right(Node * root, vector<int> &v){
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL)
        return;
        
        v.push_back(root->data);
        
        if(root->right == NULL)
        right(root->left,v);
        
        right(root->right,v);
    }
    
    void right2(Node* root, vector<int> &v2){
        vector<int> v;
        right(root, v);
        
        // add the contents of v to v2
        
        for(int i=v.size()-1; i>=0; i--){
            v2.push_back(v[i]); 
        }
    }


    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL) return ans;
        
        if(root->right == NULL && root->left == NULL){
            ans.push_back(root->data);
            return ans; 
        }
        
        ans.push_back(root->data);
        left(root->left,ans);
        leaf(root, ans);
        right2(root->right, ans);
        
        return ans; 
    }
};
