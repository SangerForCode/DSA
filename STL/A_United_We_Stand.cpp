#include <bits/stdc++.h>
using namespace std;

void solve() {
    int la,lb,lc;
    cin>>la;
    vector<int> arr(la);
    for (int i = 0; i < la; i++)
    {
        cin>>arr[i];
    }
    int mx= *max_element(arr.begin(),arr.end());
    vector<int> b,c;
    for (auto i:arr){
        if(i!=mx){
            b.push_back(i);
        }
        else{
            c.push_back(i);
        }
    }
    if (b.size()==0)
    {
        cout<< -1 << endl;
    }
    else
    {
        cout<< b.size() << " "<< c.size()<< endl;
        for (auto i:b)
            {
                cout << i << " ";
            }
            cout<< endl;
                for (auto i:c)
            {
                cout << i << " ";
            }
            cout<< endl;
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
