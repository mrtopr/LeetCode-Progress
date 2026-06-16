class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for (auto &c : operations) {
            if (c == "+") {
                int a = s.top(); s.pop();
                int b = s.top();
                s.push(a);          // restore
                s.push(a + b);
            }
            else if (c == "D") {
                s.push(2 * s.top());
            }
            else if (c == "C") {
                s.pop();
            }
            else {
                // number
                s.push(stoi(c));
            }
        }

        int sum = 0;
        while (!s.empty()) {
            sum += s.top();
            s.pop();
        }
        return sum;
    }
};
