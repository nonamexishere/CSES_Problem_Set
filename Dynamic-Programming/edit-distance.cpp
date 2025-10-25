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
    
    string s1; cin >> s1;
    string s2; cin >> s2;

    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n + 1, vector<int> (m + 1));
    for (int i = 0; i < n + 1; ++i) {
        dp[i][0] = i;
    }

    for (int i = 0; i < m + 1; ++i) {
        dp[0][i] = i;
    }

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else {
                dp[i][j] = min({dp[i - 1][j], dp[i - 1][j - 1], dp[i][j - 1]}) + 1;
            }
        }
    }

    cout << dp[n][m] << '\n';    
    return 0;
}