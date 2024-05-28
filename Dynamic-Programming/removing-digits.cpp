#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int tmp_n = n;
    int mx = 0;
    int counter = 0;
    while (n) {
        while (tmp_n) {
            mx = max(tmp_n % 10, mx);
            tmp_n /= 10;
        }
        n -= mx;
        tmp_n = n;
        counter++;
        mx = 0;
    }

    cout << counter << '\n';
    return 0;
}