#include <bits/stdc++.h>
using namespace std;

void solve() {
    int j;
    cin >>j;
    int sum=0;
    int moves=0;
    int mult=1;

    for (int i = 0; i < j; i++)
    {
        int z=0;
        cin>>z;
        sum+=z;
        mult*=z;
    }

    //  cout<<"Mult ="<<mult<<" SUM = "<<sum<<endl;
    if(sum>=0&&mult==1){
        cout<<moves<<endl;
    }
    else
    {
        bool check=false;
        while(!check){
            if (mult!=1)
            {
                sum+=2;
                moves++;
                mult*=-1;
            }
            else{
                sum+=4;
                moves+=2;
            }
            {
                if(sum>=0&&mult==1) check=true;
            }
            // cout<<"Mult ="<<mult<<" SUM = "<<sum<<endl;
        }
        cout<<moves<<endl;
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
