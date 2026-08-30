#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> arr;
    vector<int> par;
    int count=0;

    int j;
    cin>>j;
    for (int i = 0; i < j; i++)
    {
        int z;
        cin>>z;
        arr.push_back(z);
        par.push_back(z%2);
    }
   
    for(int i=0;i<par.size()-1;i++)
    {
        if(par[i]==par[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    
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
