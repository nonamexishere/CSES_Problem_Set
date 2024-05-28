#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    int q;
    cin >> q;
    vector<int> v(19);
    v[0] = 1;
    for (int i = 1; i < 19; ++i) {
        v[i] = v[i - 1] * 10;
    }
    while(q--) {
        int n; cin >> n;
        int length = 0;
        int ii = 0;
        int prev = 0;
        for (int i = 1; i < 19; ++i) {
            length += (v[i] - v[i - 1]) * i;
            if (length >= n) {
                ii = i;
                break;
            }
            prev = length;
        }
        int left = v[ii - 1];
        int right = v[ii] - 1;
        int ans = 0;
        int ansStart = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            int tmp_ans = (mid - v[ii - 1]) * ii + prev + 1;
            if (tmp_ans <= n) {
                if (mid > ans) {
                    ans = mid;
                    ansStart = tmp_ans;
                }
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        int cnt = ii - (n - ansStart) - 1;
        for (int i = 0; i < cnt; ++i) {
            ans /= 10;
        }
        cout << ans % 10 << '\n';
    }
    return 0;
}