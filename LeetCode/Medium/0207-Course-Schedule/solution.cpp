class Solution {
public:
    bool CycleDFS(vector<int> adj[], vector<bool>& dfs_visited,
                  vector<bool>& visited, int node) {
        visited[node] = true;
        dfs_visited[node] = true;

        for (auto neigh : adj[node]) {
            if (!visited[neigh]) {
                bool ans = CycleDFS(adj, dfs_visited, visited, neigh);
                if (ans)
                    return ans;

            }
                else if (dfs_visited[neigh])
                    return true;
            }
            dfs_visited[node] = false;
        
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<bool> visited(numCourses, false);
        vector<bool> dfs_visited(numCourses, false);
        vector<int> adj[numCourses];

        for (auto& p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                bool ans = CycleDFS(adj, dfs_visited, visited,i);
                    if (ans) return false;
                
            }
        }
        return true;
    }
};