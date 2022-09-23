class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        
        int left=0;
        int right =0; 
        
        while(right<n){
            nums[left]=nums[right]; 
            
            if(nums[left] !=0){
                left++; 
            }
            
            right++; 
            
        }
        
        for(int i=left; i<n; i++){
            nums[i]=0; 
        }
      
    }
};
