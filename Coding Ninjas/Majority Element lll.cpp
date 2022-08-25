#include<bits/stdc++.h> 

vector<int> countTheNumber(vector<int> &arr, int n, int k) {
	// Write your code here.
    vector<int> demo; 
    int limit = n/k; 
    
    unordered_map<int,int> m;
    
    for(int i=0; i<n; i++){
        m[arr[i]]+=1; 
    }
    
    for(auto i:m){
        if(i.second >=limit){
            demo.push_back(i.first);
        }
    }
    return demo; 
}
