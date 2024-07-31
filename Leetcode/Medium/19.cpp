class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* cur = head;
        while(cur){
            size++;
            cur = cur->next;
        }

        cur = head;
        for(int i =0; i<size - n; i++){
            cur = cur->next;
        }
        
        if (size == n) {
            ListNode* newHead = head->next;
            delete head; 
            return newHead;
        }
        
        cur = head;
        for (int i = 1; i < size - n; i++) {
            cur = cur->next;
        }
        
        ListNode* toDelete = cur->next;
        cur->next = cur->next->next;
        
        delete toDelete;
        
        return head;
    }
};