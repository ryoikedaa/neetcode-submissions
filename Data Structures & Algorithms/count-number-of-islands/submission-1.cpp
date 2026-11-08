class Solution {
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

    void dfs(vector<vector<char>>& grid, int row, int col) {
        if (row < 0 || col < 0 ||
            row >= grid.size() || col >= grid[0].size() ||
            grid[row][col] == '0') {
            return;
        }

        grid[row][col] = '0';

        for (int i = 0; i < 4; i++) {
            dfs(grid, row + directions[i][0],
                      col + directions[i][1]);
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty() || grid[0].empty()) return 0;

        int rows = grid.size();
        int cols = grid[0].size();
        int islands = 0;

        for (int row = 0; row < rows; row++) {
            for (int col = 0; col < cols; col++) {
                if (grid[row][col] == '1') {
                    dfs(grid, row, col);
                    islands++;
                }
            }
        }

        return islands;
    }
};
