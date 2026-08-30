#include <bits/stdc++.h>
using namespace std;

void solve() {
vector<vector<int>> score=  
{{1,1,1,1,1,1,1,1,1,1},
{1,2,2,2,2,2,2,2,2,1},
{1,2,3,3,3,3,3,3,2,1},
{1,2,3,4,4,4,4,3,2,1},
{1,2,3,4,5,5,4,3,2,1},
{1,2,3,4,5,5,4,3,2,1},
{1,2,3,4,4,4,4,3,2,1},
{1,2,3,3,3,3,3,3,2,1},
{1,2,2,2,2,2,2,2,2,1},
{1,1,1,1,1,1,1,1,1,1}};
int solution=0;
for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
        char c;
        cin>>c;
        if(c=='X') solution+=score[i][j];
        else continue;
    }
    
}
cout<<solution<<endl;
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
