#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    int prev = -1;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (prev > a) 
            sum += prev - a;
        else 
            prev = a;
    }
    cout << sum;
    return 0;
}