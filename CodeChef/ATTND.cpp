#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n; 
	    cin>>n;
	    string f[n];
	    string l[n];
	    for(int i=0; i<n; i++){
	        cin>>f[i]>>l[i]; // this stores the first and last name separately
	        // in two string arrays f and l. 
	        
	    }
	    
	    int arr[n];
	    for(int i=0; i<n; i++){
	        arr[i]=0; 
	    }
	    
	    for(int i=0; i<n-1; i++){
	        for(int j=i+1; j<n; j++){
	            if(f[i]==f[j]) {
	                arr[i]++; 
	                arr[j]++; 
	        }
	    }
	    }
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]!=0) cout<<f[i]<<" "<<l[i]<<endl;
	        else{
	            cout<<f[i]<<endl; 
	        }
	    }
	    
	}
	return 0;
}
