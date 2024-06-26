#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        v[i] = {y, x};
    }
    int ans = 1;
    sort(v.begin(), v.end());
    int last = v[0].first;
    for (int i = 1; i < n; ++i) {
        if (v[i].second >= last) {
            last = v[i].first;
            ans++;
        }
    }
    cout << ans;
}