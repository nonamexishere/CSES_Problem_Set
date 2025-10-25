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
    vector<int> v1(n);
    vector<int> v2(m);

    for (int i = 0; i < n; ++i) {
        cin >> v1[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> v2[i];
    }

    vector<vector<int>> dp(n + 1, vector<int> (m + 1));

    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            if (v1[i - 1] == v2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[n][m] << '\n';
    int i = n; int j = m;
    vector<int> ans;
    while (i > 0 && j > 0 && dp[i][j] > 0) {
        if (dp[i][j] > dp[i - 1][j] && dp[i][j] > dp[i][j - 1]) {
            ans.push_back(v1[i - 1]);
            i--; j--;
        }
        else if (dp[i][j - 1] > dp[i - 1][j]) {
            j--;
        }
        else {
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto& val : ans) {
        cout << val << ' ';
    }
    cout << '\n';
    return 0;
}