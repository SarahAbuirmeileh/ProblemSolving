class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0; 
        for(int i=0; i<k; i++){
            sum +=arr[i];
        }
        int ans = sum/k >= threshold;
        for(int i=1; i<=arr.size()-k; i++){
            sum -= arr[i-1];
            sum += arr[i-1+k];
            if(sum/k >= threshold){
                ans++;
            }
        }
        return ans;
    }
};