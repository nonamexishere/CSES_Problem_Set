#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> apps(n);
    vector<int> aparts(m);
    for (int i = 0; i < n; ++i) {
        cin >> apps[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> aparts[i];
    }
    sort(apps.begin(), apps.end());
    sort(aparts.begin(), aparts.end());
    int f = 0, s = 0;
    int ans = 0;
    while (f < n && s < m) {
        if (abs(aparts[s] - apps[f]) <= k) {ans++; f++; s++;}
        else if (apps[f] < aparts[s]) f++;
        else s++;
    }
    cout << ans;
}