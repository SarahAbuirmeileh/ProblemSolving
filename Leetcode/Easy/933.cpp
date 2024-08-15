
class RecentCounter {
public:
    RecentCounter() {
    }

    int ping(int t) {
        
        q.push_back(t);
        while(q.back() - q.front() > 3000){
            q.pop_front();
        }
        return q.size ();

    }

private:
    deque<int> q;
};