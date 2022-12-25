/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };

 1. If tails of both the LLs are different then return NULL
 2. 
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // find the length of headA and headB and also check if the last node is same or not. 
         int l1=0;
         int l2=0;
         ListNode* currentA = headA;

         while(currentA->next !=NULL){
             l1++;
             currentA = currentA->next; 
         }

         ListNode * currentB = headB;

         while(currentB->next !=NULL){
             l2++;
             currentB = currentB->next;
         }

         if(currentA != currentB) return NULL; 

         int diff = abs(l1-l2); 

         if(l1>l2){
             for(int i=0; i<diff; i++){
                 headA = headA->next; 
             }
         }
       else{
           for(int i=0; i<diff; i++){
               headB = headB->next; 
           }
       }


       // now both the LLs are equal. 

       while(headA != headB){
          headA= headA->next;
          headB= headB->next; 
       }

       return headA; 

        
    }
};
