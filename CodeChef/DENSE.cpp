#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s; 
	    vector<int> o(n,0);
	    vector<int> c(n,0);
	    
	    for(int i=0; i<n; i++){
	        if(s[i]=='('){
	            o[i]++; 
	        }
	        if(i>0){
	            o[i]+=o[i-1]; 
	        }
	    }
	    int sol=n+1; 
	    for(int i=n-1; i>=0; i--){
	        if(s[i]==')'){
	            c[i]++; 
	        }
	        if(i<n-1){
	            c[i]+=c[i+1]; 
	        }
	        sol= min(sol,n-2*min(o[i],c[i])); 
	    }
	    
	    cout<<sol<<endl; 
	}
	return 0;
}
