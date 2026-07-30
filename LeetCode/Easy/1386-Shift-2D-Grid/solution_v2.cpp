class Solution {
public:


void GridAns(vector<vector<int>>& grid, int &m, int &n){
    vector<int> colu(m);
    vector<int> temp(m);
    
    for(int colm = n-1;colm>0;colm--){
        for(int ro =0; ro<m ;ro++){
            swap(grid[ro][colm],grid[ro][colm-1]);
        }
    }

for(int j=m-1;j>0;j--){
    swap(grid[j][0],grid[j-1][0]);
}   
 
    
    
    
}

    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        k %= (m * n);
       for(int count = 1;count<=k;count++) {
           GridAns(grid,m,n);
       }
       return grid;
    }
};