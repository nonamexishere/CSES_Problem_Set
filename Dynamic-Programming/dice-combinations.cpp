#include <bits/stdc++.h>
#define int long long
using namespace std;

#define MOD 1000000007

/*
    1       1
    11 2      2
    111 12 21 3     3
    1111 112 121 211 13 31      4
    11111 1112 1121 1211 2111 122 212 221 113 131 311 23 32       5
    111111 11121 11211 12111 21111 1221 2121 2211 1131 1311 3111 231 321 11112 1122 1212 2112 132 312 1113 123 213 33
*/

int32_t main() {
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    v[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6; ++j) {
            if (j > i) continue;
            v[i] += v[i - j];
            v[i] %= MOD;
        }
    }
    cout << v[n] << '\n';
    return 0;
}