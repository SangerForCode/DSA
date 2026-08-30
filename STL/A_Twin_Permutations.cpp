#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    vector<int> arr;
    vector<int> sol;
    cin>>n;
    for (int i = 0; i < n;  i++)
    {
        int j;
        cin>>j;
        arr.push_back(j);
    }
    for (int i = 0; i < n; i++)
    {
        sol.push_back(n+1-arr[i]);
    }
    // sol.push_back(arr[n-1]);

    for(auto i:sol){
        cout << i << " ";
    }
    cout<< endl;
    
    
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
