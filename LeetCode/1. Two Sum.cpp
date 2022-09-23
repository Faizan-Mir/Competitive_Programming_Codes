class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<int> a(2);
        int n = nums.size();
        unordered_map<int, int> map;
        
        for(int i=0; i<n; i++){
            int diff = target - nums[i];
            if(map.find(diff)==map.end()){
                
                map.insert(make_pair(nums[i],i));
            }
            else{
                a[0]= i;
                a[1]= map[diff]; 
            }
        }
        return a; 
    }
};
