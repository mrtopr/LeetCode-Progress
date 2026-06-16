class Solution {
public:
    int rowSearch(vector<vector<int>>& matrix, int key) {
        int s = 0;
        int e = matrix.size() - 1;
        ;
        int ans = 0;
        while (s <= e) {
            long long m = s + (e - s) / 2;

            if (matrix[m][0] <= key) {
                ans = m;
                s = m + 1;
            }
             else if (matrix[m][0] > key) {
                e = m - 1;
            } 
            else 
                return m;
            
        }
        return ans;
    }
    int columnSearch(vector<vector<int>>& matrix, int key, int r) {
        int s = 0, e = matrix[0].size() - 1;
        int ans = 0;
        while (s <= e) {
            long long m = s + (e - s) / 2;

            if (matrix[r][m] < key) {
                ans = m;
                s = m + 1;
            } else if (matrix[r][m] > key) {
                e = m - 1;
            }
             else
                return m;
        }
        return ans;
    }



bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty())
        return false;
    int r = rowSearch(matrix, target);
    int c =
        columnSearch(matrix, target, r);
         if (matrix[r][c] == target) return true;
    else return false;
}
};