class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int max_count = 0;
        map<int, int>m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++){
            if((((m[k - nums[i]] > 0) && (k - nums[i] != nums[i]) ) ||  ((k - nums[i] == nums[i]) && m[nums[i]] > 1)) && m[nums[i]] > 0){
                max_count++;
                m[nums[i]]--;
                m[k - nums[i]]--;
            }
        }
        return max_count;
    }
};