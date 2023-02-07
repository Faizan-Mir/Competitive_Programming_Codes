Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        vector<int> sol;
        if(root == NULL) return sol;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        int d;
        Node* curr;
        multimap<int, int> mp;
        
        
        while(!q.empty()){
            curr = q.front().first;
            d = q.front().second;
            q.pop(); 
            mp.insert({d,curr->data}); 
            
            if(curr->left != NULL)
            q.push({curr->left, d-1});
            if(curr->right != NULL)
            q.push({curr->right, d+1});
        }
        
        
        for( auto i : mp){
            sol.push_back(i.second); 
        }
        
        return sol; 
    }
};
