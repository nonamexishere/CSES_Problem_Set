#include <bits/stdc++.h>

#define int long long
#define MOD 1000000007

using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum; cin >> n >> sum;
    map<int, pair<int, vector<int>>> m;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        m[x].first++;
        m[x].second.push_back(i + 1);
    }
    for (auto& pair : m) {
        int diff = sum - pair.first;
        if (diff == pair.first) {
            if (pair.second.second.size() >= 2) {
                cout << pair.second.second[0] << ' ' << pair.second.second[1];
                return 0;
            }
        }
        else if (m.find(diff) != m.end()) {
            cout << m[diff].second[0] << ' ' << pair.second.second[0]; 
            return 0;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}