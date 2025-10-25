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

int fastpow(int base, int exp, int mod) {
    if (exp == 0LL) return 1;
    int res = fastpow(base, exp / 2, mod);
    res = (res * res) % mod;
    if (exp & 1) {
        res = (res * base);
    }
    return res % mod;
}



void solve() {
    int a, b, c; cin >> a >> b >> c;
    int fp = fastpow(b, c, MOD - 1);
    cout << fastpow(a, fp, MOD) << '\n';
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}