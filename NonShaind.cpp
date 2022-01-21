#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--){
       int n,m,r,c;
       cin>>m>>n>>r>>c;
       r= r-1;
       c= c-1; 
       
       int b_in_r =0;
       int b_in_c =0;
       int b_anywhere =0; 
       char v[m][n]; 
       
       for(int i=0; i<m; i++){
           for(int j=0; j<n; j++){
               cin>>v[i][j]; 
               if(v[i][j]=='B') b_anywhere=1; 
               
           }
       }
       
       
       for(int i=0; i<n; i++){
           if(v[r][i]=='B') b_in_r=1;
       }
       
       for(int i=0; i<m; i++){
           if(v[i][c]=='B') b_in_c=1; 
       }
       
       if(v[r][c]=='B') cout<<0<<endl;
       else if (b_in_r == 1) cout<<1<<endl;
       else if (b_in_c == 1) cout<<1<<endl;
       else if (b_anywhere == 1) cout<<2<<endl;
       else{
           cout<<-1<<endl; 
       }
  
    
        
        
        
        
    }
   
   
   return 0;
}
