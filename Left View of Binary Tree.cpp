vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> sol;
   if(root==NULL) return sol;
   
   queue<Node*> q;
   q.push(root);
   Node* curr;
   int cnt;
   
   
   while(!q.empty()){
       
       cnt = q.size();
       for(int i=0; i<cnt; i++){
           curr = q.front();
           q.pop();
           if(i==0){
               sol.push_back(curr->data);
           }
           if(curr->left != NULL)
           q.push(curr->left);
           if(curr->right != NULL)
           q.push(curr->right);
       }
   }
   return sol; 
}
