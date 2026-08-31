#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a = 0; // number of factors of 2
    int b = 0; // number of factors of 3

    while (n % 2 == 0) {
        n /= 2;
        a++;
    }

    while (n % 3 == 0) {
        n /= 3;
        b++;
    }

    // Some other prime factor exists
    if (n != 1) {
        cout << -1 << '\n';
        return;
    }

    // More 2s than 3s => impossible
    if (a > b) {
        cout << -1 << '\n';
        return;
    }

    cout << 2 * b - a << '\n';
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
}