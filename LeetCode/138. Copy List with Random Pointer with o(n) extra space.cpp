/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL) return head; 
        Node* current = head;
        Node* clone = new Node(current->val); 
        Node* prev = clone; 
        current = current->next; 
        Node* temp; 
        
        while(current){

            temp = new Node(current->val);
            prev->next = temp; 
            prev = temp; 
            current = current->next; 
        }

        unordered_map<Node*, Node*> map;
        current = head;
        Node* current2 = clone;

        while(current){
            map[current]=current2; 
            // mapping from old to new 
            current = current->next;
            current2 = current2->next; 
        }

        current = head;
        current2 = clone; 

        while(current){
            temp = current->random; 
            current2->random = map[temp];
            current = current->next;
            current2 =current2->next;
        }


        return clone; 






















    }
};
