class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int ans = 0;
        int n = height.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //             area = min(height[i],height[j]) * (j - i);
        //             ans = max(area, ans);
        //     }
        //     ans = max(area, ans);
        // }
        // return ans;

        int l = 0;
        int r = n-1;
        while(l<r){
        area = min(height[l],height[r]) * (r - l);
             ans = max(area, ans);
            if(height[r] >= height[l]) l++;
          else r--;

        }
        return ans;
    }
};