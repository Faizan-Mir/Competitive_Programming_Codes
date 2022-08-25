class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0; 
        int j=matrix[0].size()-1;
        
        while(j>=0 && i<matrix.size()){
            cout<<matrix[i][j]<<" "; 
            if(matrix[i][j]==target) return true;
            
            else if(target>matrix[i][j]){
                i++;
            }
            else if(target<matrix[i][j]){
                j--; 
            }
        }
       
        return false; 
    }
};
