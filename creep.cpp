

//Codeforces Round #800 (Div. 2) A. Creep



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--) {
        int a,b;
        cin>>a>>b;

        string s ="";
        while(a && b) {
            s+="01";
            a--;
            b--;
        }
        while(a--) {
            s+="0";
        }

        while(b--) {
            s+="1";
        }
         cout<<s<<endl;  
    }
    
}
