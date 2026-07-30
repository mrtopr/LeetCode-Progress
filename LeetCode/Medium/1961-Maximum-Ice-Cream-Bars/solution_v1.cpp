class Solution {
public:

       int maxIceCream(vector<int>& costs, int coins) {
        vector<int> arr = costs;
        
             int mx = *max_element(arr.begin(),arr.end());
       
       vector<int> count(mx+1,0);
       for(int x: arr){
           count[x]++;
 
       }
       
vector<int> ans;
       for(int i=0;i<=mx;i++){
           while(count[i]--){
               ans.push_back(i);
           }
 
       }
       int cnt= 0;
       int ansr=0;
       for (auto t : ans){
           if(ansr +t<=coins) {
               ansr+=t;
               cnt++;
           }
       }
       return cnt;
       
        
    }
};