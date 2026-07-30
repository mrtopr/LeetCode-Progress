class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int maxi = 0;
        for (auto h : gain){
            sum+=h;
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};