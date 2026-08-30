#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> soln;
    int n;
    cin>>n;
    int k;
    cin>>k;
    int prev=k;
    soln.push_back(k);
    for (int i = 1; i < n; i++)
    {
        cin>>k;
        if(k>=prev){
            soln.push_back(k);
        }
        else
        {
            soln.push_back(1);
            soln.push_back(k);
        }
        prev=k;
    }
    
    cout<< soln.size() << endl;
    for(auto m:soln){
        cout << m << " ";
    }
    cout<<endl;
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
