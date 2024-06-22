#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    map<int, int> f;
    map<int, int> s;
    set<int> w;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        f[x]++;
        s[y]++;
        w.insert(x);
        w.insert(y);
    }
    int curr = 0;
    for (const int& num : w) {
        curr += f[num];
        curr -= s[num];
        mx = max(curr, mx);
    }
    cout << mx;
    return 0;
}