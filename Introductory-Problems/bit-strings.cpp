#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int pwr = 1;
    for (int i = 1; i <= n; ++i) {
        pwr = (pwr * 2) % MOD;
    }
    cout << pwr;
    return 0;
}