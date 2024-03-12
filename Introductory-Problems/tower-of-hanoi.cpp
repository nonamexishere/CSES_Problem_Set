#include <bits/stdc++.h>

using namespace std;

void hanoi (int n, char start, char end, char middle) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, start, middle, end);
    cout << start << ' ' << end << '\n';
    hanoi(n - 1, middle, end, start);
}

int main() {
    int n;
    cin >> n;
    int factor = 1;
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result += factor;
        factor *= 2;
    }
    cout << result << '\n';
    hanoi(n, '1', '3', '2');
}