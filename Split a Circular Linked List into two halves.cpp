void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    // reaching the middle of the LL
    Node* fast = head;
    Node* slow = head;
    
    while(fast->next !=head && fast->next->next !=head){
        fast = fast->next->next;
        slow = slow->next; 
    }
    
    *head1_ref = head;
    Node *temp = slow->next;
    slow->next = head;
    
    *head2_ref = temp; 
    while(temp->next != head){
        temp = temp->next; 
    }
    
    temp->next = *head2_ref; 
    
    
}
