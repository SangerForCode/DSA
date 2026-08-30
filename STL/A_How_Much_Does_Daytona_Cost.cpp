#include <bits/stdc++.h>
using namespace std;

bool compare2(pair<int,int> p1,pair<int,int> p2){
    if(p2.second<p1.second)return true;
    else
    return false;
}
void solve() {
    map<int,int> mp;
    int n;
    cin>>n;
    int k;
    cin>>k;
    for (int i = 0; i < n; i++)
    {
        int h;
        cin>>h;
        mp[h]++;
    }
    vector<pair<int,int>> vec;
    for(auto np:mp){
        vec.push_back({np.first,np.second});
    }
    if(mp.find(k)!=mp.end())cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    // sort(vec.begin(),vec.end(),compare2);
    // cout<<vec[0].first<< " "<<vec[0].second <<endl;
    
    // if(vec[0].first==k){
    //     cout<<"YES"<<endl;
    //     // cout<<vec[0].first<<endl;
    // }
    // else
    // cout<<"NO"<<endl;
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
