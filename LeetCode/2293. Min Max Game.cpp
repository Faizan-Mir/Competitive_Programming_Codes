class Solution {
public:
    
    void calculate(vector<int> & v, int n){
        if(n==1) return;
        
        for(int i=0; i<n/2; i++){
            if(i%2==0){
                v[i]=min(v[2*i], v[2*i+1]);
            }
            else{
                v[i]= max(v[2*i], v[2*i+1]); 
            }
        }
        
        calculate(v,n/2); 
    }
    
    
    int minMaxGame(vector<int>& nums) {
        int n= nums.size();
        calculate(nums, n);
        
        return nums[0]; 
    }
};
