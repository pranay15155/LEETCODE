class Solution
{
public:
    int n, m;
    int check(int row, int col)
    {
        if (row >= n || col >= m || row < 0 || col < 0)
            return 0;
        return 1;
    }
    bool f(int row, int col, int ind, string &temp, string &word, vector<vector<char>> &board, vector<vector<int>> &vis)
    {
        temp.push_back(board[row][col]);
        vis[row][col] = 1;
        int dr[4] = {-1, 0, 1, 0};
        int dc[4] = {0, 1, 0, -1};
        if (temp == word)
            return 1;
        for (int i = 0; i < 4; i++)
        {
            int nrow = row + dr[i];
            int ncol = col + dc[i];
            if (check(nrow, ncol) == 1 && vis[nrow][ncol] == 0 && ind + 1 < word.size() && board[nrow][ncol] == word[ind + 1])
            {
                if (f(nrow, ncol, ind + 1, temp, word, board, vis) == 1)
                    return 1;
            }
        }
        temp.pop_back();
        vis[row][col] = 0;
        return 0;
    }
    bool exist(vector<vector<char>> &board, string word)
    {
        n = board.size();
        m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        bool ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                string temp = "";
                int ind = 0;
                ans |= f(i, j, ind, temp, word, board, vis);
            }
        }
        return ans;
    }
};