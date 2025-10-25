#include <bits/stdc++.h>

#ifndef ONLINE_JUDGE
#include "../templates/debug.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif

#define int long long
#define MOD 1000000007

using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<vector<int>> dp(n, vector<int> (m + 1));
    if (v[0] == 0) {
        for (int i = 1; i <= m; ++i) {
            dp[0][i] = 1;
        }
    }
    else dp[0][v[0]] = 1;
    for (int i = 1; i < n; ++i) {
        if (v[i]) {
            int j = v[i];
            if (j > 1)
                dp[i][j] += ((dp[i - 1][j - 1]) % MOD) % MOD;
            if (j < m) 
                dp[i][j] += ((dp[i - 1][j + 1]) % MOD) % MOD;
            dp[i][j] += dp[i - 1][j];
            dp[i][j] %= MOD;
            continue;
        }
        for (int j = 1; j <= m; ++j) {
            if (j > 1)
                dp[i][j] += ((dp[i - 1][j - 1]) % MOD) % MOD;
            if (j < m) 
                dp[i][j] += ((dp[i - 1][j + 1]) % MOD) % MOD;
            dp[i][j] += dp[i - 1][j];
            dp[i][j] %= MOD;
        }
        debug(dp);
    }
    int ans = 0;
    for (int i = 1; i <=m; ++i) {
        ans += dp[n - 1][i];
        ans %= MOD;
    }
    cout << ans << '\n';
    
    return 0;
}