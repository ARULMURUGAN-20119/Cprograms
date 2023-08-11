#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findMinimumCost(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = grid[0][0];

    // Calculate minimum cost for the first row
    for (int j = 1; j < n; j++) {
        dp[0][j] = dp[0][j-1] + grid[0][j];
    }

    // Calculate minimum cost for the first column
    for (int i = 1; i < n; i++) {
        dp[i][0] = dp[i-1][0] + grid[i][0];
    }

    // Calculate minimum cost for the rest of the grid
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j];
        }
    }

    return dp[n-1][n-1];
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int minimumCost = findMinimumCost(grid);
    cout << minimumCost << endl;

    return 0;
}
