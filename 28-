class Solution {
public:
    using VI = vector<int>;
    using Queue = priority_queue<int, VI, less<int>>;
    int minStoneSum(VI& A, int k, Queue q = {}) {
        for (auto x: A)
            q.push(x);
        while (k--) {
            auto x = q.top(); q.pop();
            q.push(x - x / 2);
        }
        auto t = 0;
        while (q.size())
            t += q.top(), q.pop();
        return t;
    }
};
