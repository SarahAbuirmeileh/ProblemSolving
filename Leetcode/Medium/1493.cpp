class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeros = 0;
        int max_length = 0;
        int size = nums.size();
        int l = 0;
        for(int r = 0; r < size; r++){
            if(nums[r] ==  0){
                zeros++;
            }
            while(zeros > 1){
                if(nums[l] == 0){
                    zeros--;
                }
                l++;
            }
            max_length = max(max_length, r - l );
        }

        return max_length;
    }
};