#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t; 
    cin>>t; 
    
    while(t--){
        
        
        int n; 
        cin>>n; 
        set<int, greater<int> > s1;
        int a; 
        while(n--){
            cin>>a; 
            s1.insert(a); 
        }
        
        set<int, greater<int>>::iterator it;
        
        set<int,greater<int>>::iterator it2;
        
for(it = s1.begin(); it != s1.end(); it++) {
    
    for (it2 = std::next(it, 1); it2 != s1.end(); ++it2) {
        
        s1.insert(abs(*it-*it2)); 
    }
}
        int k; 
        cin>>k; 
        
      if(k>s1.size()){
          cout<<-1; 
      }
      
      else{
  set<int, greater<int>>::iterator itr = s1.begin();
std::advance(itr, k-1);
cout<<*itr; 

}

    cout << endl;
        
        
        
    }
    
    
 
   
   return 0;
}
