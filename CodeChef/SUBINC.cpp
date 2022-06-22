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
	    
	    long long cont =1; 
	    long long count=0; 
	   for(int i=0; i<n; i++){
	       cin>>arr[i]; 
	   }
	   
	   for(int i=1; i<n; i++){
	      
	       if(arr[i]>=arr[i-1]){
	           count +=cont;
	           cont++; 
	       }
	       else{
	           cont =1; 
	       }
	   }
	   
	   cout<<count+n<<endl; 
	}
	return 0;
}
