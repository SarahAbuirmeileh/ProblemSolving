class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ctr = 1, diff;
        
        for(int i = 0; i < arr.size(); i++) {
            diff = arr[i] - ctr;
            
            if (diff >= k) {
                return ctr + k - 1;
            }
            
            k -= diff;
            ctr = arr[i] + 1;
        }
        
        return arr.back() + k;
    }
};
