class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](vector<int>&a, vector<int> &b){
            if(a[0] == b[0]){
                return a[1] > b[1];
            }
            
            return a[0] < b[0];
        });
        int ans =0;
        int mxEnd = 0;
        for(auto interval : intervals){
           if(interval[1]>mxEnd){
               mxEnd = interval[1];
               ans +=1;
           }
        }
        
        return ans;
    }
};