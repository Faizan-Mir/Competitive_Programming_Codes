#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    
	    int a=0; 
	    int b=0; 
	    int n; 
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0; i<n-1; i++){
	        cin>>arr[i]; 
	    }
	    
	    a= arr[0];
	    b=2*arr[0]; 
	    
	   for(int i=1; i<n-1; i++){
	       if(b>=a+arr[i]){
	           b+=arr[i]; 
	           a+=arr[i];
	       }
	       else{
	           b+= (a+arr[i]-b)+arr[i]; 
	           a+=arr[i]; 
	       }
	   }
	    
	    
	    
	    cout<<b<<endl; 
	    
	}
	return 0;
}
