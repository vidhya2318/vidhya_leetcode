class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
		// mx[j] stores the maximum element in 
        vector<int> mx(n);
		// iterate columns first
        for (int j = 0; j < n; j++) {
			// iterate rows
            for (int i = 0; i < m; i++) {
				// getting the maximum element for column `j`
                mx[j] = max(mx[j], matrix[i][j]);
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
				// if it is -1, then we can replace it with mx[j]
                if (matrix[i][j] == -1) {
                    matrix[i][j] = mx[j];
                }
            }
        }
        return matrix;
    }
};