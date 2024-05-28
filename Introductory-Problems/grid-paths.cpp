#include <bits/stdc++.h>

using namespace std;

vector<vector<bool>> visited(9, vector<bool>(9, false));

string s;

int dfs(int r, int c, int count) {
    if (r < 1 || r > 7 || c < 1 || c > 7 || visited[r][c]) return 0;
    
    if ((visited[r + 1][c + 1] && !visited[r + 1][c] && !visited[r][c + 1]) ||
        (visited[r - 1][c + 1] && !visited[r - 1][c] && !visited[r][c + 1]) ||
        (visited[r - 1][c - 1] && !visited[r - 1][c] && !visited[r][c - 1]) ||
        (visited[r + 1][c - 1] && !visited[r + 1][c] && !visited[r][c - 1])) return 0;
    if ((visited[r + 1][c] && visited[r - 1][c] && !visited[r][c + 1] && !visited[r][c - 1]) ||
        (visited[r][c + 1] && visited[r][c - 1] && !visited[r + 1][c] && !visited[r - 1][c])) return 0;

    if (count == 48) return (r == 7 && c == 1) ? 1 : 0;
    else if (r == 7 && c == 1) return 0;
    
    visited[r][c] = true;
    
    int totalPaths = 0;
    if (s[count] == 'R') totalPaths = dfs(r, c + 1, count + 1);
    else if (s[count] == 'L') totalPaths = dfs(r, c - 1, count + 1);
    else if (s[count] == 'D') totalPaths = dfs(r + 1, c, count + 1);
    else if (s[count] == 'U') totalPaths = dfs(r - 1, c, count + 1);
    else {
        totalPaths += dfs(r, c + 1, count + 1);
        totalPaths += dfs(r - 1, c, count + 1);
        totalPaths += dfs(r + 1, c, count + 1);
        totalPaths += dfs(r, c - 1, count + 1);
    }
    
    visited[r][c] = false;
    
    return totalPaths;
}

int main() {
    cin >> s;
    for (int i = 0; i < 9; ++i) {
        visited[0][i] = true;
        visited[8][i] = true;
        visited[i][0] = true;
        visited[i][8] = true;
    }
    cout << dfs(1, 1, 0);
    return 0;
}
