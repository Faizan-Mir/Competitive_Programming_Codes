#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n; 
	    vector<int> arr(n); 
	    for(int i=0; i<n; i++){
	        cin>>arr[i]; 
	    }
	    
	    int a = pow(10,6);
	    int b= pow(10,6); 
	    
	    for(int i=0; i<n; i++){
	        if(arr[i]<a){
	            b=a; 
	            a=arr[i];
	        }
	        
	        else{
	            if(arr[i]<b){
	                b=arr[i]; 
	            }
	        }
	    }
	    
	    cout<<a+b<<endl; 
	    
	    
	}
	return 0;
}
