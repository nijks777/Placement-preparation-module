class Solution {
public:

    ListNode* reverseList(ListNode* head) {

       
        ListNode* prev_p = NULL;
        ListNode* current_p = head;
        ListNode* next_p;
       
       
        while(current_p) {

            next_p = current_p->next;
            current_p->next = prev_p;
            
            prev_p = current_p;
            current_p = next_p;
        }

        head = prev_p; 
        return head;
    }
};
