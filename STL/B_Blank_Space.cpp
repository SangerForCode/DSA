#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin>>k;
    vector<int> t;
    int b=0;
    for (int i = 0; i < k; i++)
    {
        int j;
        cin>>j;
        if(j==0){
            b++;
        }
        else{
            t.push_back(b);
            b=0;
        }

    }
     t.push_back(b);
    cout<< *(max_element(t.begin(),t.end()))<<endl;
    
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
