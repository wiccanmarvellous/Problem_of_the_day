#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool dfs(vector<vector<char>>& board, string word, vector<vector<int>> &vis, 
        int curr, int row, int col, int arr[], int m, int n, int len) {
        vis[row][col] = 1;
        if (curr == len)
            return true;
        for (int i = 0; i < 4; i++) {
            int r = row + arr[i];
            int c = col + arr[i + 1];
            if (r > -1 && c > -1 && r < m && c < n && !vis[r][c] && board[r][c] == word[curr]) {
                if (dfs(board, word, vis, curr + 1, r, c, arr, m, n, len))
                    return true;
                vis[r][c] = 0;
            }
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(), n = board[0].size();
        vector<vector<int>> vis(m, vector<int> (n, 0));
        vector<vector<int>> Vis(m, vector<int> (n, 0));
        int curr = 0;
        int arr[] = {-1, 0, 1, 0, -1};
        for (int i = 0; i < m; i ++) {
            for (int j = 0; j < n; j++) {
                if (word[curr] == board[i][j] && !vis[i][j]) {
                    if (dfs(board, word, vis, curr + 1, i, j, arr, m, n, word.length()))
                        return true;
                    vis[i][j] = 0;
                }
            }
        }
        return false;
    }
};