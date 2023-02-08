class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        // You start from the root. 
        // if the current value is greater than x, you add that to succ and move left
        // if the current value is less than x, you move right
        // you do this until you reach NULL
        
        Node* succ = NULL;
        Node* temp = root;
        
        while(temp != NULL){
            if(temp->data>x->data){
                succ= temp;
                temp = temp->left;
            }
            else{
                temp = temp->right; 
            }
        }
        
        return succ; 
    }
};
