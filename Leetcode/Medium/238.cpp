class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1, size = nums.size();
        int zeros = 0;
        for(int i = 0; i < size; i++){
            if(nums[i])product *= nums[i];
            else zeros++;
        }
        vector<int> prod(size);
        for(int i = 0; i < size; i++){
            prod[i] = (nums[i] ?  zeros ? 0 : product / nums[i] : zeros > 1 ? 0 : product );
        }
        return prod;
    }
};