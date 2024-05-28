#include <bits/stdc++.h>
#define int long long
using namespace std;

#define MOD 1000000007

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    vector<int> v(x + 1, 0);
    v[0] = 1;
    for (int i = 1; i <= x; ++i) {
        for (int j : c) {
            if (j > i) continue;
            v[i] += v[i - j];
            v[i] %= MOD;
        }
    }
    cout << v[x] << '\n';
    return 0;
}