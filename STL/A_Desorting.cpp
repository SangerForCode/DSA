#include <bits/stdc++.h>
using namespace std;
bool comp(int a,int b){
    if(b>=a){
        return true;
    }
    else{
        false;
    }
}

void solve() {
    int k;
    cin>>k;
    vector<int> arr;
    for (int i = 0; i < k; i++)
    {
        int f;
        cin>>f;
        arr.push_back(f);
    }
    vector<int> diff;
    
   if(!is_sorted(arr.begin(),arr.end()),comp){ 
    for (int i = 1; i < arr.size(); i++)
    {
        diff.push_back(arr[i]-arr[i-1]);
    }
    
}
    // for(auto j:diff){cout<<j<<" ";}
    int dif=*min_element(diff.begin(),diff.end());
    if(dif==0){
        cout<<"1"<<endl;
    }
    else if(dif<0){
        cout<<"0"<<endl;
    }
    else
    {
        cout<<(dif/2)+1<<endl;
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
