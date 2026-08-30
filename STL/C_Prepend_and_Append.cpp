#include <bits/stdc++.h>
using namespace std;

void solve() {
    int j;
    cin>>j;
    int solution=0;
    string s;
    cin>>s;
    int l=0;
    int k=j-1;
    while (l<k && s[l]!=s[k])
    {
        l++;
        k--;
    }
    
    cout<<j-2*l<<endl;
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
