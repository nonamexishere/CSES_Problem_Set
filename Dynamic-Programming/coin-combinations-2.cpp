#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

int32_t main() {
    int n, x;
    cin >> n >> x;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }
    vector<int> v(x + 1, 0);
    v[0] = 1;
    for (int i : c) {
        for (int j = 0; j <= x; ++j) {
            if (i > j) continue;
            v[j] += v[j - i];
            v[j] %= MOD;
        }
    }
    cout << v[x] << '\n';
    return 0;
}