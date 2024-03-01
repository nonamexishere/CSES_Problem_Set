#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << (((i * i) * (i * i - 1)) / 2) - (4 * (i - 1) * (i - 2)) << '\n';
    }
    return 0;
}