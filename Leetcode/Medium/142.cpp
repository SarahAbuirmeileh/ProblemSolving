// https://algo.monster/liteproblems/142 
// Or using set to store the occurrences (memory addresses)

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast= fast->next->next;
            if(fast == slow){
                ListNode* h = head;
                while(head != slow){
                    head = head->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};