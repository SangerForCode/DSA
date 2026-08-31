#include <bits/stdc++.h>
using namespace std;

void solve() {
    int j;
    cin>>j;
    int count=0;
    int count0=0;

    for (int i = 0; i < j; i++)
    {
        int t;
        cin>>t;
        if(t==1){count++;}
        else if(t==0){count0++;}
    }
    
    cout<<(1ll << count0) * count <<endl;
    
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
