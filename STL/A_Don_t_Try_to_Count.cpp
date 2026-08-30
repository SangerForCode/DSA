#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,n2;
    cin>>n;
    cin>>n2;
    string s;
    string ver;
    int sol=0;
    bool found=false;
    cin>> s;cin>> ver;
    while(s.size()<ver.size()){
        s+=s;
        sol++;
    }
    if(s.find(ver)!=string::npos){
        cout<<sol<<endl;
        return;
    }
    s+=s;
    sol++;
      if(s.find(ver)!=string::npos){
        cout<<sol<<endl;
        return;
    }
    else{ cout<<"-1"<<endl;}

    

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
