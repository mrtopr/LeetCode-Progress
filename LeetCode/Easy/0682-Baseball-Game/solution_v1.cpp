class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> stack; // Stack to store scores

        for (const string& op : operations) {
            if (op == "+") {
                // Sum the last two scores and push the result
                if (stack.size() >= 2) {
                    int last = stack.back();
                    int second_last = stack[stack.size() - 2];
                    stack.push_back(last + second_last);
                }
            } else if (op == "D") {
                // Double the last score and push the result
                if (!stack.empty()) {
                    stack.push_back(2 * stack.back());
                }
            } else if (op == "C") {
                // Remove the last score
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else {
                // Convert string to integer and push
                try {
                    int score = stoi(op);
                    stack.push_back(score);
                } catch (...) {
                    // Handle invalid integer (optional, assuming valid input)
                }
            }
        }

        // Sum all scores in the stack
        int ans = 0;
        for (int a : stack) {
            ans += a;
        }

        return ans;
    }
};