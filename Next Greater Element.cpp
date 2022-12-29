class stk
{
    private: 
   int t = -1;
  // int size = 0; 
   long long arr[1000000]; 
   
   public:
   
   void push(long long d){
       t++;
       arr[t]= d;
       
   }
   
   void pop(){
       t--;
   }
   
   long long top(){
       return arr[t];
   }
   
   bool empty(){
      return t==-1; 
   }
   
}; 

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stk s;
        
        //if the stack is empty add -1 to sol
        vector<long long> sol(n);
        
        
        for(long long i=n-1; i>=0; i--){
            
            long long current = arr[i]; 
            
            while(!s.empty() && s.top()<=current){
                s.pop(); 
            }
            
            if(s.empty()) sol[i]=-1;
            
            else{
                sol[i]= s.top();
                
            }
            
            s.push(current);
            
            
            
        }
        
        return sol; 
        
        
    }
};
