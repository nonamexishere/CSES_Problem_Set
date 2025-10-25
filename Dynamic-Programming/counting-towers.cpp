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

vector<int> dp(1e6 + 1);

void solve() {
    int n; cin >> n;
    cout << dp[n] << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1; cin >> t;
    
    dp[1] = 2;
    for (int i = 2; i < 1e6 + 1; ++i) {
        dp[i] = dp[i - 1] * 2;
        dp[i] %= MOD;
    }

    
    while (t--) {
        solve();
    }
    
    return 0;
}