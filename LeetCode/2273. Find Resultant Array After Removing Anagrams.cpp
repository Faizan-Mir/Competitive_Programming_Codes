class Solution {
public:
    
    bool is_anagram(string a, string b){
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        return a==b; 
    }
    vector<string> removeAnagrams(vector<string>& words) {
        
        
        vector<string> v; 
        int n = words.size();
        int left = 0; 
        int right = 0; 
        
        v.push_back(words[0]);
        
        while(right<n){
            
            
            if(!is_anagram(words[left], words[right])){
                left = right; 
                v.push_back(words[left]);
            }
            
            right++;
            
        }
        
        return v; 
    }
};
