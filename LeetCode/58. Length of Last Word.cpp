class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int index = n-1;
        
        while(s[index]==' '){
            index--;
        }
        
        
        int count=0;
        
        while(index>=0 && s[index]!=' ' ){
            index--;
            count++; 
        }
      
        
        return count; 
        
    }
};
