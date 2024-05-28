#include <bits/stdc++.h>

#define int long long
#define MOD 1000000007

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n + 1, vector<int> (n + 1, 0));
    vector<vector<int>> dp(n + 1, vector<int> (n + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            char c;
            cin >> c;
            if (c == '*') grid[i][j] = 1;
        }
    }
    for (int i = 0; i <= n; ++i) {
        grid[i][0] = 1;
        grid[0][i] = 1;
    }
    if (grid[1][1] || grid[n][n]) {cout << 0; return 0;}
    if (n == 1) {cout << 1; return 0;}
    dp[1][1] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 && j == 1) continue;
            if (!grid[i][j]) dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            dp[i][j] %= MOD;
        }
    }
    cout << dp[n][n] << '\n';
    return 0;
}