class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        vector<int> dp(triangle.size());
        for(int i=0; i<dp.size(); i++){
            dp[i]=triangle[triangle.size()-1][i];
        }
        
        for(int i=triangle.size()-2; i>=0; i--){
            for(int j=0; j<=i; j++){
                
                dp[j]= triangle[i][j] + min(dp[j], dp[j+1]); 
            }
        }
        
        return dp[0]; 
    }
};
