class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* cur = head;
        vector<int>v;
        while(cur){
            v.push_back(cur->val);
            cur = cur->next;
        }

        return solve(v, 0, v.size()-1);
    }

    TreeNode* solve(vector<int>&v, int left, int right){
        if(left > right){
            return NULL;
        }
        int mid = left + (right - left) / 2;

        TreeNode* node = new TreeNode(v[mid]);

        node->left = solve(v, left, mid-1);
        node->right= solve(v, mid+1, right);
        
        return node;
    }

};