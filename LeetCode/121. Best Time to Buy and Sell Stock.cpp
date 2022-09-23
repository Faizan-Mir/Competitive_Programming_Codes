class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n= prices.size();
        if(n<=1) return 0;
        
        int left = 0;
        int right = 1;
        int profit = 0;
        
        while(right<n){
            if(prices[right]<=prices[left]){
                left = right;
                
            }
            else{
                profit = max(profit, prices[right]-prices[left]); 
                
            }
            
            right++; 
        }
        
        return profit; 
        
        
        
    }
};
