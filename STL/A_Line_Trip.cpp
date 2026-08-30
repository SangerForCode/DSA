#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin>> n;
    int len=n;
    cin>>k;
    vector<int> refuel;
    for(auto x:n){
        int z;
        cin>>z;
        refuel.push_back(z);
    }
    return
    
    //     for (auto i :refuel)
    // {
    //     cout<< i << " ";        /* code */
    // }
    //cout<<endl;
    vector<int> ans;
    ans.push_back(refuel[0]);
    for(int z=1;z<len;z++){
        ans.push_back(refuel[z]-refuel[z-1]);
    }
    ans.push_back(2*(k-refuel.back()));
    // for (auto i :ans)
    // {
    //     cout<< i << " ";        /* code */
    // }
    
    cout <<  *(max_element(ans.begin(),ans.end()))<< endl;
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
