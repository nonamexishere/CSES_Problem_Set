#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    vector<vector<bool>> isReserved(8, vector<bool>(8, 0));
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            char row;
            cin >> row;
            if (row == '*') {
                isReserved[i][j] = 1;
            }
        }
    }
    vector<int> v = {1, 2, 3 ,4, 5, 6, 7, 8};
    int ans = 0;
    do {
        int isSuitable = 0;
        for (int i = 0; i < 8; ++i) {        
            for (int j = 0; j < 8; ++j) {
                if (j == i) continue;
                if (abs(v[j] - v[i]) - abs(j - i) == 0) break;
                if (isReserved[j][v[j] - 1] == 1) break;
                if (j == 7) isSuitable++;
            }
            if (i == 7 && isSuitable == 7) ans++;
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << ans;
}