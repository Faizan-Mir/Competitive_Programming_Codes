class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
           int count =0; 
           int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                count++; 
            }
            
            else{
                int temp = nums[i]; 
                nums[i]=0; 
                nums[i-count]=temp; 
                
            }
        }
      
    }
};
