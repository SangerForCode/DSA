#include <bits/stdc++.h>
using namespace std;

bool gandu(pair<int,int>p1,pair<int,int> p2){
    if(p2.second>p1.second) return true;
    else if(p2.second==p1.second){
        if(p1.first<p2.first)return true;
        else return false;
    }
    else return false;
}

void solve() {
    vector<pair<int,int>> p;
    p={{7,1},{1,2},{0,42},{3,1},{3,353}};
    sort(p.begin(),p.end(),gandu);
    for(auto c:p){
        cout << c.first << " "<< c.second << endl;
    }
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
