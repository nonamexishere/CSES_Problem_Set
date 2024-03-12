#include <bits/stdc++.h>

using namespace std;

set<string> permutations;

int factorial (int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
} 

void permute (string& s, int l, int r) {
    if (l == r) {
        permutations.insert(s);
    }
    for (int i = l; i <= r; ++i) {
        swap(s[l], s[i]);
        permute(s, l + 1, r);
        swap(s[l], s[i]);
    }
}

int main () {
    unordered_map<char, int> m;
    string s;
    cin >> s;
    int length = s.size();
    for (char l : s) {
        m[l]++;
    }
    int divide = 1;
    for (auto& pair : m) {
        divide *= factorial(pair.second);
    }
    int total = factorial(length) / divide;
    cout << total << '\n';
    permute(s, 0, length - 1);
    for (auto& per : permutations) {
        cout << per << '\n';
    }
    return 0;
}