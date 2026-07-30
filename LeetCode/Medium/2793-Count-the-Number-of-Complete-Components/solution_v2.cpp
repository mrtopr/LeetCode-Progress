class Solution {
public:
    void DFS(int node, vector<bool>& vis, vector<vector<int>>& adj,
             int& nodeCount, int& degreeSum) {

        vis[node] = true;
        nodeCount++;
        degreeSum += adj[node].size();

        for (int nei : adj[node]) {
            if (!vis[nei]) {
                DFS(nei, vis, adj, nodeCount, degreeSum);
            }
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        // Build adjacency list
        for (auto& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> vis(n, false);
        int ans = 0;

        for (int node = 0; node < n; node++) {

            if (!vis[node]) {

                int nodeCount = 0;
                int degreeSum = 0;

                DFS(node, vis, adj, nodeCount, degreeSum);

                int edgeCount = degreeSum / 2;

                if (edgeCount == nodeCount * (nodeCount - 1) / 2) {
                    ans++;
                }
            }
        }

        return ans;
    }
};