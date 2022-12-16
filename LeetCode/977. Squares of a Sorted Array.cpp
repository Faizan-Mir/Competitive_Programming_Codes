class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int r;
       int n = nums.size(); 
       for(int i=0; i<n; i++){
           if(nums[i]>=0){
               r=i;
               break; 
           }
       }
      vector<int> temp; 
      int l = r-1;
      while(r<n && l>=0){
          if(nums[r]>abs(nums[l])){
            temp.push_back(pow(nums[l],2));
            l--;
          }
          else{
              temp.push_back(pow(nums[r],2));
              r++; 
          }

      }

      if(l<0){
          while(r<n){
              temp.push_back(pow(nums[r],2));
               r++;
          }
      }

      else{
          while(l>=0){
               temp.push_back(pow(nums[l],2));
              l--; 
          }
      }
    return temp; 

    } 
};
