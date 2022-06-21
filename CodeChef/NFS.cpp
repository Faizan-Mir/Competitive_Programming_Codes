#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s; 
	    
	    if(pow(u,2) - 2*a*s <=pow(v,2)){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl; 
	    }
	}
	return 0;
}
