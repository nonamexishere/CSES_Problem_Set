#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main () {
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int total = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        total += v[i];
    }
    
    int nearest = LLONG_MAX;
    for (int i = 0; i < (1 << n); ++i) {
        int a = n - 1;
        int sum = 0;
        int summers = (((int)pow(2, n) - 1) & i);
        while (summers != 0) {
            if (summers % 2 == 1) {
                sum += v[a];
            }
            a--;
            summers /= 2;
        }
        nearest = min(nearest, abs(total - 2 * sum));
    }
    cout << nearest;
    return 0;
}