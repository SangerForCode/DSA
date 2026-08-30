#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b+2<=n || a==b&& a==n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)