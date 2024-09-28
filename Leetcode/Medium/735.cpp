class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int size = asteroids.size();
        stack<int>s;

        for(int i = 0; i < size; i++){
            if(s.empty()){
                s.push(asteroids[i]);
            }else{
                if(asteroids[i] < 0){
                    while(!s.empty()){
                        if(s.top() > 0){
                            bool add = false;
                            while(!s.empty() && s.top() < abs(asteroids[i]) && s.top() > 0){
                                s.pop();
                                add = true;
                            } 
                            if(add && (s.empty() || (!s.empty() && s.top() < 0) ))s.push(asteroids[i]);
                            if(!s.empty() && s.top() == abs(asteroids[i])){
                                s.pop();
                                break;
                            }else{
                                break;
                            }
                        }else{
                            s.push(asteroids[i]);
                            break;
                        }
                    }
                }else{
                    s.push(asteroids[i]);
                }
            }
        }

        vector<int>ans;
        while(!s.empty()){
            ans.insert(ans.begin(), s.top());
            s.pop();
        }
        return ans;
    }
};