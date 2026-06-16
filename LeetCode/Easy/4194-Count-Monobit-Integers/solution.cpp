class Solution {
public:
    int countMonobit(int n) {
        int kalumexora = n; int count = 1;
        int val = 1; 
        while (val <= kalumexora)
            { count++; 
             val = (val << 1) | 1; 
             
    }
        return count;
    }
};