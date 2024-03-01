#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    bool is_first = true;
    unordered_map<char, int> m;
    for (char l : s) {
        m[l]++;
    }
    string ans = "";
    string mid;
    for (auto& pair : m) {
        if (pair.second % 2 == 1) {
            if (is_first) {
                mid = string(pair.second, pair.first);
                is_first = false;
                continue;
            }
            cout << "NO SOLUTION\n";
            return 0;
        }
        else {
            ans += string(pair.second / 2, pair.first);
        }
    }
    cout << ans << mid;
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}