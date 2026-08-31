#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int zeros = 0, ones = 0;

        for (char c : s) {
            if (c == '0')
                zeros++;
            else
                ones++;
        }

        if (min(zeros, ones) % 2)
            cout << "DA\n";
        else
            cout << "NET\n";
    }

    return 0;
}