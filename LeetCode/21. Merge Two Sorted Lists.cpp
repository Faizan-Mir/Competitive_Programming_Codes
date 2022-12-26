/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* newhead = new ListNode(); 
        ListNode* current = newhead; 
        ListNode *first = list1;
        ListNode *second = list2;
        while(first && second){
            if(first->val < second->val){
               current->next = new ListNode(first->val); 
                first = first->next;
            }
            else{
              current->next = new ListNode(second->val); 
              second = second->next; 
            }
            current = current->next; 
        }

        if(first){
            current->next = first;
        }
        else{
            current->next = second; 
        }


return newhead->next; 

    }
};
