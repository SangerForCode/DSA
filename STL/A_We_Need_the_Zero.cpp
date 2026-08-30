#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int xr=0;
    for (int i = 0; i < n;  i++)
    {
        int x;
        cin>>x;
        xr^=x;
    }
    if(n%2==1){
        cout<< xr<< endl;
    }
    else{
        if(xr==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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
