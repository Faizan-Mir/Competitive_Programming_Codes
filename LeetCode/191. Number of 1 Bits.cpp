class Solution {
public:
    int hammingWeight(uint32_t n) {
       uint32_t mask = 1; 
        int count=0; 
        for(int i=0; i<32; i++){
            if(mask&n) count++;
            mask<<=1; 
        }
        
        return count; 
        
        
        
    }
};
