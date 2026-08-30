#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n , k;
   cin >> n;
   cin >>k;
   vector<int> vec;
   while(n--){
    int j;
    cin>>j;
    vec.push_back(j);
   } 
   if(k==1){
    if(is_sorted(vec.begin(),vec.end())==1) cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
   }
   else{
    if(is_sorted(vec.begin(),vec.end())==1)
    cout<<"YES"<<endl;
    else cout<<"YES"<<endl;
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
