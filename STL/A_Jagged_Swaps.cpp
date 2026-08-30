#include <bits/stdc++.h>
using namespace std;
#define pb push_back
void solve() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int k;
        cin>>k;
        arr.pb(k);
    }
    if(arr[0]==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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
