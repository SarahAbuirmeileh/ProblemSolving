class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_set<int> s;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (s.count(complement)) {
                ans.push_back(m[complement]);
                ans.push_back(i);
                break;
            }
            s.insert(nums[i]);
            m[nums[i]] = i;  
        }

        return ans;
    }
};
