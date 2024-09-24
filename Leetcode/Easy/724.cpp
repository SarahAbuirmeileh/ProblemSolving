class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size() + 1 ;
        vector<int>sum (size );
        for(int i = 1; i < size; i++){
            sum[i] = sum[i - 1] + nums[i-1]; 
        }

        for(int i = 1; i < size; i++){
            if(sum[i - 1] == (sum[size - 1 ] - sum[i])){
                return i - 1;
            }
        }
        return -1;
    }
};