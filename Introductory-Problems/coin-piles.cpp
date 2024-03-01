#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int a, b;
        cin >> a >> b;
        if (a > (2 * b) || b > (2 * a) || (a + b) % 3 != 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}