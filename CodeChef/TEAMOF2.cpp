#include<bits/stdc++.h>
using namespace std;


bool compare(vector<bool> v1, vector<bool> v2){
    for (int i=1; i<v1.size(); i++){
        if((v1[i] | v2[i]) != 1) return false; 
    }
    
    return true; 
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<vector<bool>> question(n,vector<bool>(6,false)); 
        
        for(int i=0; i<n; i++){
            int k;
            cin>>k; 
            for(int j=1; j<=k; j++){
                int temp;
                cin>>temp; 
                question[i][temp]=true; 
            }
        }
        
        
       // cout<<question[1][1]<<endl; 
        
        
      //  cout<<compare({0,0,1,1,1,1}, {0,1,1,0,1,0})<<endl; 
        
        
        
        // now our 2d vector is complete. 
        // now we move on to simple iterations. 
        int check =0; 
        
       for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(compare(question[i], question[j]) == true) {
                    check=1;
                    break;
                    break; 
                    
                }
            }
        }
        
        if(check) cout<<"Yes"<<endl;
        else cout<<"No"<<endl; 
        
    }
    
    
    return 0;
}
