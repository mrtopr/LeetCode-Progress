class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        int n  = intervals.size();
        for(int a = 0;a<n;a++) {
            int f = intervals[a][0];
            int s = intervals[a][1];
            for(int j=0;j<n;j++ ){
                if (a == j) continue;
                
                int t= intervals[j][0];
                int fr = intervals[j][1];
                                if (t <= f && fr >= s && (t < f || fr > s)) {
    count++;
    break;
}            }
            }
            return n - count;
        
    }
};