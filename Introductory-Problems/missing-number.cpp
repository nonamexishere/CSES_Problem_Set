#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    int n, sum;
    cin >> n;
    sum = (n * (n + 1)) / 2;
    for (int i = 1; i < n; ++i) {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum;
    return 0;
}