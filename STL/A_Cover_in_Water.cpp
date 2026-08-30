#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;

    cin >> n >> s;

    int dots = 0;
    int consecutive = 0;

    for (char c : s) {
        if (c == '.') {
            dots++;
            consecutive++;

            if (consecutive >= 3) {
                cout << 2 << '\n';
                return;
            }
        } else {
            consecutive = 0;
        }
    }

    cout << dots << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}