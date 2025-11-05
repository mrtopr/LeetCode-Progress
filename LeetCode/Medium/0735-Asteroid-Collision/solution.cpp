class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> stack;
        
        for (int asteroid : asteroids) {
            bool destroyed = false;
            
            while (!stack.empty() && asteroid < 0 && stack.back() > 0) {
                if (stack.back() < -asteroid) {
                    stack.pop_back(); // Current asteroid is larger, pop the smaller one
                    continue;
                } else if (stack.back() == -asteroid) {
                    stack.pop_back(); // Equal size, both destroyed
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // Current asteroid destroyed
                    break;
                }
            }
            
            if (!destroyed) {
                stack.push_back(asteroid);
            }
        }
        
        return stack;
    }
};

