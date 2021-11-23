/* Input:
s = "00100100"
K = 1
Output:
6
Explanation: You can start from 3rd or
6th city and visit one city on the left
side or one city on their right side. So,
it is possible to visit the 2nd,3rd,4th,
5th,6th and 7th city. 


s = "0010100"
K = 1
Output:
5
Explanation: You can start from 3rd or
5th city and visit one city on the left
side or one city on their right side. So,
it is possible to visit the 2nd,3rd,4th,
5th and 6thcity.*/ 


class Solution{
    public:
    int solve(string s, int K){
        // code here
        int l = s.length();
         set<int, greater<int> > s1; 
         
        
         
         for(int i=0; i<s.length(); i++){
             if(s[i]=='1') {
                 for(int j=max(i-K,*(s1.begin())); j<=i+K; j++ ){
                     s1.insert(j);
                 }
                 
             }
         }
        
        for(int i=-K; i<0; i++){
            s1.erase(i);
        }
        for(int i=l; i<l+K; i++){
            s1.erase(i); 
        }
        return s1.size(); 
    }
};
