#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    auto max=max_element(arr.begin(),arr.end());
    for (int j = 1; j < n - 1; j++) {
    if (arr[j - 1] < arr[j] && arr[j] > arr[j + 1]) {
        cout << "YES\n";
        cout << j << " " << j + 1 << " " << j + 2 << "\n";
        return;
    }
}
cout << "NO\n";
    
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
