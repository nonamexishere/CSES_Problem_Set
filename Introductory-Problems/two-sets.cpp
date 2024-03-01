#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> fs;
    vector<int> sc;
    if (n % 4 == 0 || (n + 1) % 4 == 0) {
        cout << "YES\n";
        if (n % 2 == 0) {
            for (int i = 1; i <= n; ++i) {
                if (i <= n / 4 || i > 3 * n / 4) 
                    fs.push_back(i);
                else 
                    sc.push_back(i);
            }
        }
        else {
            int counter = -2;
            for (int i = 1; i <= n; ++i) {
                if (i < 3)
                    fs.push_back(i);
                else if (i == 3)
                    sc.push_back(i);
                else if (counter <= (n - 3) / 4 || counter > 3 * (n - 3) / 4)
                    fs.push_back(i);
                else 
                    sc.push_back(i);
                counter++;
            }
        }
    }
    else {
        cout << "NO\n";
        return 0;
    }
    cout << fs.size() << '\n';
    for (int f : fs) {
        cout << f << ' ';
    }
    cout << '\n' << sc.size() << '\n';
    for (int s : sc) {
        cout << s << ' ';
    }
    return 0;
}