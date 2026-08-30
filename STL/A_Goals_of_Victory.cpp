#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int soln=0;
    for (int i = 1; i < n; i++)
    {
        int j;
        cin>>j;
        soln+=j;
    }
    cout<<-soln<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
