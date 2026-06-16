class Solution {
public:
    int bitwiseComplement(int n){
      if(n==0) {
          return 1;
      } 
        int p=0;
        while((1<<p) <= n) p++;
        p--;
        int ans=n;
        for(int i=0;i<=p;i++){
            ans = ans^(1<<i);
        }
        return ans;
    }
    
};