class Solution {
public:
    
    int helper(vector<int> & nums, int x, vector<int> &dp){
        int n= nums.size();
         if(x>=n){
            return 0; 
        }
        if(dp[x]!=-1){
            return dp[x];
        }
        if(x==n-1 || x==n-2){
            dp[x]=nums[x];
            return nums[x];
        }
       
        dp[x]=nums[x]+ max(helper(nums,x+2,dp), helper(nums,x+3,dp));
        return dp[x];
        
        
        
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector<int> dp(n,-1);
        return max(helper(nums,0,dp), helper(nums,1,dp)); 
    }
};
