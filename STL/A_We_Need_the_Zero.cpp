#include <bits/stdc++.h>
using namespace std;

void solve() {
    int j;
    cin>>j;
    int solution=0;
    vector<int> arr;
    for (int i = 0; i < j; i++)
    {
        // cin>>arr[i];
        int k;
        cin>>k;
        arr.push_back(k);
    }
    for (int i = 0; i <= ((j)/2); i++)
    {
        if(arr[i]!=arr[j-i-1]){
            solution++;
        }
        else{
            continue;
        }
    }
    cout<< solution<<endl;
    
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
