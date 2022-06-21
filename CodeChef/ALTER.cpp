#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,p,q;
	    cin>>a>>b>>p>>q;
	    
	    
	    
	    int n=p/a;
	    int m =q/b;
	    if(p%a!=0 || q%b!=0){
	        cout<<"No"<<endl;
	    }
	    
	    
	    else if(abs(m-n)<=1){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl; 
	    }
	}
	return 0;
}
