#include <bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> prices(n + 1);
    vector<int> pages(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> prices[i];
    }
    for (int i = 1; i <= n; ++i) {
        cin >> pages[i];
    }
    vector<vector<int>> ks(n + 1, vector<int> (x + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= x; ++j) {
            if (prices[i] <= j) {
                ks[i][j] = max(ks[i - 1][j - prices[i]] + pages[i], ks[i - 1][j]);
            }
            else {
                ks[i][j] = ks[i - 1][j];
            }
        }
    }
    cout << ks[n][x];
    return 0;
}