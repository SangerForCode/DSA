#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<long long> arr;
    long long j;
    cin>>j;
    long long mult=0;
    for (long long i = 0; i < j; i++)
    {
        long long k;
        cin>>k;
        if (k%2==0)
        {
            mult++;
        }
        arr.push_back(k);
        
    }
    long long point=mult/2;
    if(mult%2){
        cout<<-1<<endl;
        return;
    }

        for(long long i=0;i<arr.size();i++){
                if(arr[i]==2)point--;
                if(point==0){cout<<i+1<<endl;
                break;}
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
