class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int position = 0;
        int size = nums.size();
        int k = 0;
        for(int i = 0; i < size; i++){
            if(nums[i] != val){
                nums[position++] = nums[i];
                k++;
            }
        }
        return k;
    }
};