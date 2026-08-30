#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    // int k=log10(abs(n))+1;
    // int j= n%(10^(k-1));
    // cout<<j<<endl;
    string str=to_string(n);
    int k=str.length()-1;
    int j=str[0]-'0';
    cout<<k*9+j<<endl;




    
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
