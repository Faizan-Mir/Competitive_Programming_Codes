#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    set<int> s;
	    
	    for(int i=0; i<n; i++){
	        int temp;
	        cin>>temp;
	        s.insert(temp); 
	    }
	    
	    int unique = s.size(); 
	    int non_unique = n- unique; 
	    
	    if(unique%2 !=0 && non_unique == 0) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl; 
	    
	    
	    
	    
	}
	return 0;
}
