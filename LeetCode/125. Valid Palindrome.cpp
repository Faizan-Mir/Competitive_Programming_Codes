class Solution {
public:
    bool isPalindrome(string s) {
        
        string a;
        for(int i=0; i<s.size(); i++){
            // 48 to 57 numerics
            // 65 to 90 Capitals
            // 97 to 122 small 
            if(s[i]>=48 && s[i]<=57) a.push_back(s[i]);
            else if(s[i]>=97 && s[i]<=122) a.push_back(s[i]);
            else if(s[i]>=65 && s[i]<=90) a.push_back(s[i]+32);
        }
        
        int n= a.size(); 
        for(int i=0; i<n/2; i++){
            if(a[i]!=a[n-1-i]) return false;
        }
        
        return true; 
    }
};
