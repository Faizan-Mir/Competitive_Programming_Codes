class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int size = nums1.size() + nums2.size();

        vector<int> v; 

        for(int i=0; i<nums1.size(); i++){
            v.push_back(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            v.push_back(nums2[i]);
        }

        sort(v.begin(), v.end());

        if(size%2==0){
            // even case
            return ((double)v[size/2] + (double)v[(size/2)-1])/2;
        }
        else{
            return ceil(v[size/2]); 
        }


    }
};
