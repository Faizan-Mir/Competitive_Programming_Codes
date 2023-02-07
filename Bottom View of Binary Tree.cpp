class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> sol;
        if(root == NULL) return sol;
        
        queue<pair<Node*, int>> q;
        map<int, int> mp; 
        
        q.push({root, 0});
        int d;
        Node* curr; 
        
        
        while(!q.empty()){
            curr = q.front().first;
            d = q.front().second;
            q.pop();
            mp[d]=curr->data;
            
            if(curr->left != NULL)
            q.push({curr->left, d-1});
            if(curr->right != NULL)
            q.push({curr->right, d+1});
        }
        
        for(auto i: mp){
            sol.push_back(i.second); 
        }
        
        return sol; 
        
        
        
        
    }
};
