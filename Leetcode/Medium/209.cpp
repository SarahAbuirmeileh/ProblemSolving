class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n =nums.size(), size = nums.size();
        int min_length = 100001, left = 0, sum = 0;

        for(int right=0; right<n; right++){
            sum += nums[right];

            while(sum>=target){
                min_length = min(min_length, right - left + 1);
                sum-=nums[left++];
            }
        }

        return min_length == 100001 ? 0 : min_length;
    }
};
