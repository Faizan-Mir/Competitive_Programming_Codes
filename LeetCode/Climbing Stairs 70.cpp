class Solution {
public:
    
   int solve(int i, int n, vector<int> &dp){
       if(dp[i] !=-1){
           return dp[i]; 
       }
       if(i==n)
           return 1;
       if(i>n)
           return 0;
       
       int temp = solve(i+1,n, dp)+solve(i+2,n, dp);
       dp[i]=temp; 
       return temp; 
   }
    
    int climbStairs(int n) {
        vector<int> dp(n+2, -1); 
    
        return solve(0,n,dp); 
        
        
    }
};
