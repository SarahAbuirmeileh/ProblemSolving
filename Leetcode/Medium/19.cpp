class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int size = 0;
        ListNode* cur= head;
        while(cur){
            cur = cur->next;
            size++;
        }

        cur = head;
        if(size == n){
            head = head->next;
            delete cur;
            return head;
        }

        for(int i=1; i<size - n; i++){
            cur = cur->next;
        }

        ListNode* del = cur->next;
        cur->next = cur->next->next;
        delete del;
        
        return head;
    }
};