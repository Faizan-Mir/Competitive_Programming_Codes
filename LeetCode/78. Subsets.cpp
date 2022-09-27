class Solution {
public:
    
    void backtrack(int start, vector<int> cur, vector<int> &v, vector<vector<int>> &list){
        list.push_back(cur);
        
        if(start>=v.size()){
            return; 
        }
        
        for(int i=start; i<v.size(); i++){
            cur.push_back(v[i]);
            backtrack(i+1,cur, v,list);
            cur.pop_back();
        }
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        
        backtrack(0,{}, nums,ans); 
        
        return ans; 
    }
};
