class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(int n : nums){
            pq.push(n);
        }
        while(--k){
           pq.pop();
        }
        return pq.top();
    }
};

///// 

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int n : nums){
            pq.push(n);
        }
        int ans, n = nums.size()-k;
        while(--n){
           pq.pop();
        }
        return pq.top();
    }
};