#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n; 
	    
	   int l = ceil(log2(n)); 
	   
	   n = ~n; 
	   long long mask = 1;
	   int count=0; 
	   
	   for(int i=0; i<l; i++){
	       if((n&mask) !=0){
	           count++; 
	       }
	       mask <<=1; 
	   }
	    
	    cout<<count<<endl; 
	    
	    
	}
	
	
	
	
	
	return 0;
}
