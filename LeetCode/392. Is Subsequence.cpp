class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first=0;
        int second=0;
        
        while(first<s.size() && second<t.size()){
            if(s[first]==t[second]){
                first++;
            }
            
            second++; 
        }
        
        
        if(first==s.size()){
            return true;
        }
        else{
            return false; 
        }
    }
};
