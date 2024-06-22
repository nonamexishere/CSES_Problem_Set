#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    int ans = 0;
    while (l <= r) {
        if (l == r) {
            ans++;
            break;
        }
        if (v[l] + v[r] <= x) {
            l++;
            r--;
            ans++;
        } 
        else if (v[r] <= x) {
            r--;
            ans++;
        }
    }
    cout << ans;
    return 0;
}