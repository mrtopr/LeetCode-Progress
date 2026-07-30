class Solution {
public:

       int maxIceCream(vector<int>& costs, int coins) {
        vector<int> arr = costs;
        
             int mx = *max_element(arr.begin(),arr.end());
       
       vector<int> count(mx+1,0);
       for(int x: arr){
           count[x]++;
 
       }
       int cost = 0;
int ans = 0;
       for(int i=1;i<=mx;i++){
           if(count[i]==0) continue;
           if(count[i]){
               int take = min(count[i], coins/i);
               ans += take;
               coins -= take*i;
               if (coins<i) break;
           }
       }
       
       
            return ans;
       
        
    }
};