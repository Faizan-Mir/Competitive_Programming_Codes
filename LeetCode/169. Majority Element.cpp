class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size(); 
        sort(nums.begin(),nums.end());
        int i=0; 
        for(i=0; i<n/2; i++){
            if(nums[i]== nums[i+(n/2)])
            break;  

        }
        return nums[i]; 
    }
};
