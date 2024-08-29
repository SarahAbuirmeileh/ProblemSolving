class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>nums;
        ListNode* cur = head;
        while(cur){
            nums.push_back(cur->val);
            cur = cur->next;
        }
        int l = 0, r = nums.size()-1, maxi = nums[l]+nums[r];
        while(l<r){
            maxi = max(maxi, nums[l++]+nums[r--]);
        }
        return maxi;
    }
};