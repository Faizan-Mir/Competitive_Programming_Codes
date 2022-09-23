class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        queue<int> q;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                q.push(nums[i]); 
            }
        }
        
        int index =0; 
        while(q.size()>0){
            nums[index]=q.front();
            q.pop(); 
            index++;
        }
        
        for(int i=index; i<n; i++){
            nums[i]=0;
        }
        
      
    }
};
