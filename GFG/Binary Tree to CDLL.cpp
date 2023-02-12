class Solution
{
  public:
    //Function to convert binary tree into circular doubly linked list.
    queue<Node*> q;
    
    void inorder(Node* root){
        if(root == NULL) return; 
        
        inorder(root->left);
        q.push(root);
        inorder(root->right); 
    }
    
    Node *bTreeToCList(Node *root)
    {
    
    if(root == NULL) return NULL;
    Node* prev = NULL;
    Node* temp; 
    
    inorder(root); 
    
    Node* first = q.front(); 
    q.push(first); 
    
    while(!q.empty()){
        temp = q.front();
        q.pop();
        if(q.size()==0){
            temp->left = prev;
            break; 
        }
        temp->right = q.front();
        temp->left = prev;
        prev = temp; 
    }
    
    
    return first; 
    }
};
