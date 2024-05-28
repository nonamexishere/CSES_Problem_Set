#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    vector<int> dp(x + 1, 1e7);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    dp[0] = 0;
    for (int i = 1; i <= x; ++i) {
        for (int j : v) {
            if (j > i) continue;
            dp[i] = min(dp[i - j] + 1, dp[i]);
        }
    }
    cout << (dp[x] == 1e7 ? -1 : dp[x]);
    return 0;
}