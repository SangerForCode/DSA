#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,x;
    cin>> n >> k>>x;
    //(1<x<k<n<100)

vector<int> soln;
int sum=0;
if(x!=1){
    cout<< "YES" << endl;
    cout<< n << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< "1" << " ";
    }
    cout<< endl;
    
}
else{
    if (k<3 && n%2!=0 || k==1)
    {
    cout<< "NO" << endl;    
    }
    else
    {
        cout<< "YES" << endl;    
        if(n%2==0){
            soln.insert(soln.end(),n/2,2);
        }
        else{
            soln.insert(soln.end(),n/2-1,2);
            soln.push_back(3);
        }
        cout<<soln.size()<<endl;
        for (auto i:soln)
        {
            cout<< i << " ";
        }
        cout<< endl;
        

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
