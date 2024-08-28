class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>m;
        for(int n : nums){
            m[n]++;
        }

        priority_queue<pair<int, int>>pq;
        for(auto mm : m){
            pq.push({mm.second, mm.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};