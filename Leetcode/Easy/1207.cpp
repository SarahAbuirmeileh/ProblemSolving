class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int size = arr.size();
        map<int, int>m;
        for(int i = 0; i < size; i++){
            m[arr[i]]++;
        }

        set<int>s;
        for(auto mm : m){
            if(s.count(mm.second)){
                return false;
            }
            s.insert(mm.second);
        }
        return true;
    }
};