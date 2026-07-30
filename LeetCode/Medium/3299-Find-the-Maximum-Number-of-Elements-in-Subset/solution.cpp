class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
       int n = nums.size();
        unordered_map<long long,int> freq;
        
        for(auto temp : nums){
            freq[temp]++;
        }
        int ans = 0;
        for(auto &[start, cnt]: freq){
                            
                if (start == 1) {
ans = max(ans, (cnt % 2) ? cnt : cnt - 1);
continue;
}
long long x = start;
            int len = 0;
                        
            while (freq.count(x) && freq[x] >= 2) {
    len += 2;

    if (x > 1000000000LL)
        break;

    x *= x;
}

if (freq.count(x) && freq[x] == 1)
    len++;      // valid center
else
    len--;      // remove the unmatched pair
                    
                ans = max(ans, len);
        }
        return ans;
    }
};