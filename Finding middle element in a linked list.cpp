class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        if(head==NULL) return -1; 
        Node *slow = head;
        Node *fast = head;
        
        while(true){
            if(fast==NULL){
                return slow->data;
            }
            else if(fast->next == NULL){
                return slow->data;
            }
            else{
                fast = fast->next->next;
                slow = slow->next; 
            }
        }
    }
};
