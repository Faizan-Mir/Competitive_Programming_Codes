class Solution {
public:
    char findTheDifference(string s, string t) {
       char sum = '\0';
        s = s+t;
        
        for(int i=0; i<s.size(); i++){
            sum= sum^s[i];
        }
        
        return sum; 
    }
};
