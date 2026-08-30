#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
   map<int,int> mp;
    cin>>n;
for (int i = 0; i < n; i++)
{
    int k;
    cin>>k;
    mp[k]++;
}
if(mp.size()>2) cout<< "No\n";
else if(mp.size()==1)cout<< "Yes\n";
else{
    auto it=mp.begin();
    int f1=it->second;
    it++;
    int f2=it->second;
    if(abs(f1-f2)>1){cout<<"No\n";
    }
    else cout<<"Yes\n";
}
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
