#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> bro;
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin>>k;
        bro.push_back(abs(k));

    }
    int solution= *min_element(bro.begin(),bro.end());
    cout<<solution<<endl;


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
