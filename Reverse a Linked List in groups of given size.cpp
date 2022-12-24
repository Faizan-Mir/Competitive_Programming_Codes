
class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
       
        struct node *current = head;
        struct node *prev = NULL;
        struct node *right; 
        
        int count =0;
        
        while(current!=NULL && count<k){
            
            
            right = current->next;
            current->next = prev;
            prev= current; 
            current = right;
            count++; 
            
        }
        
        if(current!=NULL){
            head->next = reverse(current,k); 
        }
        
        return prev; 
        
        
        
    }
};
