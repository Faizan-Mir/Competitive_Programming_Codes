class Solution {
public:
    
    int solve(vector<int> &cost, int i, vector<int> &dp){
        
        if(dp[i] != -1){
            return dp[i]; 
        }
        if(i==cost.size()-1)
            return cost[i];
        if(i>=cost.size())
            return 0; 
        
        int temp= cost[i]+min(solve(cost, i+1,dp), solve(cost,i+2,dp)); 
        dp[i] = temp;
        return temp; 
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() +5, -1); 
        
       return min(solve(cost,0,dp), solve(cost,1,dp)); 
    }
};
