#include <bits/stdc++.h>

using namespace std;

void grayCode(int n, vector<int>& vec) {
    if (n == 1) {
        vec.push_back(0);
        vec.push_back(1);
        return;
    }
    else {
        grayCode(n - 1, vec);
        int size = vec.size();
        for (int i = 0; i < size; ++i) {
            int multi = pow(2, n - 1);
            vec.push_back(vec[size - 1 - i] + multi);
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> ans;
    grayCode(n, ans);
    int size = ans.size();
    for (int i = 0; i < size; ++i) {
        bitset<16> bit(ans[i]);
        cout << bit.to_string().substr(16 - n) << '\n';
    }
    return 0;
}