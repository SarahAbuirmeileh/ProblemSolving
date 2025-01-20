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
    ListNode* deleteMiddle(ListNode* head) {
        int size = 0;
        ListNode* cur = head;
        while (cur){
            size++;
            cur = cur->next;
        }
        int mid = size / 2;
        cur = head;
        if(!head || size == 1){
            return NULL;
        }
        while(--mid){
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return head;
    }
};