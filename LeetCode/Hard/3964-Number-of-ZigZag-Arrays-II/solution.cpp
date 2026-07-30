using vl=vector<long long>;
using vvl=vector<vl>;
using dpclass=unordered_map<int,vvl>;
const int mod=1e9+7;
class Solution {
    vvl& getDp(dpclass& dp,int n, int k){
        auto it=dp.find(n);
        if(it!=dp.end()) return it->second;
        int nleft = (n-1)/2+1; int nright=n-nleft+1;
        bool rev=nleft%2;
        dp[n]=vvl(k,vl(k,0));
        vvl &curr=(dp.find(n))->second;
        vvl &left=getDp(dp,nleft,k);
        vvl &right=getDp(dp,nright,k);
        for(int s=0;s<k;s++) for(int e=0;e<k;e++) for(int m=0;m<k;m++){
            curr[s][e]+=left[s][m]*(rev?right[m][e]:right[k-1-m][k-1-e]);
            if(curr[s][e]>mod) curr[s][e]%=mod;
        }
        return curr;
    }
public:
    int zigZagArrays(int n, int l, int r) {
        long long res=0, k=r-l+1;
        dpclass dp;
        //n=2
        dp[2]=vvl(k,vl(k,0));
        for(int s=0;s<k;s++) for(int e=s+1;e<k;e++) dp[2][s][e]=1;
        vvl& dpn=getDp(dp,n,k);
        for(int s=0;s<k;s++) for(int e=0;e<k;e++) res+=dpn[s][e];
        return ((res*2)%mod+mod)%mod;
    }
};