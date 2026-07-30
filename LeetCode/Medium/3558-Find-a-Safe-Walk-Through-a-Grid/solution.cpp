class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> best(n, vector<int>(m, -1));

        queue<pair<pair<int,int>, int>> q;

        int startHealth = health - grid[0][0];
        if(startHealth <= 0) return false;

        q.push({{0,0}, startHealth});
        best[0][0] = startHealth;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty()) {
            auto cur = q.front();
            q.pop();

            int r = cur.first.first;
            int c = cur.first.second;
            int h = cur.second;

            if(r == n - 1 && c == m - 1)
                return true;

            for(int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if(nr < 0 || nc < 0 || nr >= n || nc >= m)
                    continue;

                int newHealth = h - grid[nr][nc];

                if(newHealth <= 0)
                    continue;

                if(newHealth <= best[nr][nc])
                    continue;

                best[nr][nc] = newHealth;
                q.push({{nr, nc}, newHealth});
            }
        }

        return false;
    }
};