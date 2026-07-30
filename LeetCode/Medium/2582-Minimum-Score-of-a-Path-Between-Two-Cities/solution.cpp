class Solution {
public:
int ans = INT_MAX;

void DFS(int u, vector<bool> &vis, vector<vector<pair<int,int>>> &adj){
    vis[u] = true;
    
    for(auto [v,wt] : adj[u]){
        ans = min(ans,wt);
        if(!vis[v]){
            DFS(v, vis, adj);
        }
    }
    return;
}


    int minScore(int n, vector<vector<int>>& roads) {
        
        
        vector<vector<pair<int,int>>> adj(n+1);
        for (auto &e : roads){
            int u = e[0];
            int v = e[1];
            int wt = e[2];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt}); //unidirectional 
            
        }
        vector<bool> vis(n + 1, false);
        
        
        DFS(1,vis,adj);
        return ans;
    }
};