#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;
    cin>>a>>b;
    cin>>c>>d;
    int moves=0;
    if(b>d || (c>a&& b==d)){
        cout<<-1<<endl;

    }
    else{
        while(b!=d){
            ++b;
            ++a;
            ++moves;
        }
        if(a<c) cout<<-1<<endl;
        else{
        while(a!=c){
            --a;
            ++moves;
        }
        cout<< moves<<endl;
    }};

    


    
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
