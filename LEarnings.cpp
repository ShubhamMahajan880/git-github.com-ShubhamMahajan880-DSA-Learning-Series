class Solution
{
public:
    void dfs(int row, int col, int n, int m, vector<vector<int>> &image, vector<vector<bool>> &vis, int newColor, int oldColor)
    {
        vis[row][col] = true;
        image[row][col] = newColor;

        // Up
        if (row - 1 >= 0 && !vis[row - 1][col] && image[row - 1][col] == oldColor)
        {
            dfs(row - 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Down
        if (row + 1 < n && !vis[row + 1][col] && image[row + 1][col] == oldColor)
        {
            dfs(row + 1, col, n, m, image, vis, newColor, oldColor);
        }

        // Left
        if (col - 1 >= 0 && !vis[row][col - 1] && image[row][col - 1] == oldColor)
        {
            dfs(row, col - 1, n, m, image, vis, newColor, oldColor);
        }

        // Right
        if (col + 1 < m && !vis[row][col + 1] && image[row][col + 1] == oldColor)
        {
            dfs(row, col + 1, n, m, image, vis, newColor, oldColor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int n = image.size();
        int m = image[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int oldColor = image[sr][sc];

        if (oldColor == newColor) // no need to fill
            return image;

        dfs(sr, sc, n, m, image, vis, newColor, oldColor);
        return image;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> image = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 0, 1}};

    int sr = 1, sc = 1, newColor = 2;

    vector<vector<int>> result = sol.floodFill(image, sr, sc, newColor);

    cout << "Flood filled image:\n";
    for (auto &row : result)
    {
        for (auto &cell : row)
        {
            cout << cell << " ";
        }
        cout << "\n";
    }

    /*
Flood filled image:
2 2 2
2 2 0
2 0 1
     */
}
