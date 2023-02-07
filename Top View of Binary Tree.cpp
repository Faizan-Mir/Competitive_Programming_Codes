class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        
        vector<int> sol;
        if(root==NULL) return sol;
        
        queue<pair<Node*, int>> q;
        q.push({root, 0}); 
        map<int, int> mp; 
        Node* curr;
        int d;
        
        while(!q.empty()){
            curr = q.front().first;
            d= q.front().second;
            if(mp.find(d)==mp.end()){
                mp[d]=curr->data;
            }
            q.pop();
            if(curr->left != NULL)
            q.push({curr->left,d-1});
            if(curr->right != NULL)
            q.push({curr->right, d+1});
        }
        
        for(auto i : mp){
            sol.push_back(i.second); 
        }
        return sol; 
    }

};
