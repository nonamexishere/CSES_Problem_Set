#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    map<int, int> tickets;
    vector<int> maxs(m);
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        tickets[x]++;
    }
    for (int i = 0; i < m; ++i) {
        cin >> maxs[i];
    }
    for (int i = 0; i < m; ++i) {
        auto it = tickets.upper_bound(maxs[i]);
        if (it == tickets.begin()) cout << -1 << '\n';
        else {
            it--;
            cout << it->first << '\n';
            it->second--;
            if (it->second == 0) {
                tickets.erase(it);
            }
        }
    }
    return 0;
}