#include<bits/stdc++.h>
using namespace std; 


int main(){
    int t;
    cin>>t;
    while(t--){
        
        int x; 
        cin>>x; 
        int check =0; 
        
        for(int i=1; i*i<=x; i++){
            if(x<5){
                break; 
            }
            else if((x-(2*i))%(i+2)==0) {  // 5 - 2 % 3   3%3 =0 
                check=1;
                break; 
                
            } 
        
        }
        
      if(check) cout<<"YES"<<endl;
      else{
          cout<<"NO"<<endl; 
      }
        
    }
    
    return 0; 
    
}
