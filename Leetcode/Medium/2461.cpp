class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long max_sum = 0, sum = 0;
        int l =0;

        set<int>s;
        for(int r = 0; r <nums.size(); r++){
            while(s.count(nums[r])){
                s.erase(nums[l]);
                sum-=nums[l++];
            }
            s.insert(nums[r]);
            sum+=nums[r];

            if(r - l + 1 == k){
                max_sum = max(max_sum, sum);
                s.erase(nums[l]);
                sum-=nums[l++];
            }
        }
        return max_sum;
    }
};
