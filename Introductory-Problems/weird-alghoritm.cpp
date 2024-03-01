#include <iostream>
#define int long long
using namespace std;

int32_t main() {
    int n;
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        n % 2 == 0 ? n /= 2 : n = 3 * n + 1;
        cout << n << ' ';
    }
}