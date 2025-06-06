class Solution{
public:
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m = grid.size(), n = grid[0].size();
    deque<int> dq; 
    // Flatten grid into deque
    for (const auto& row : grid) {
        for (int num : row) {
            dq.push_back(num);
        }
    }
    // Shift using deque rotation
    k = k % (m * n);
    for (int i = 0; i < k; ++i) {
        dq.push_front(dq.back());
        dq.pop_back();
    }
    // Rebuild grid from deque
    vector<vector<int>> result(m, vector<int>(n));
    for (int i = 0; i < m * n; ++i) {
        result[i / n][i % n] = dq.front();
        dq.pop_front();
    }
    return result;
}
};