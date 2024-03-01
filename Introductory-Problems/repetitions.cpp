#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 0;
    int mx = 0;
    char c = 'A';
    if (s.size() == 1) {
        cout << 1;
        return 0;
    }
    for (char& l : s) {
        if (c == l) {
            count++;
        }
        else {
            c = l;
            mx = max(mx, count);
            count = 1;
        }
    }
    mx = max(mx, count);
    cout << mx;
}