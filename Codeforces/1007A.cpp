#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int k; cin >> k;
    // cout << (k % 3) << nl;
    if((k % 3) == 1) cout << "YES" << nl;
    else  cout << "NO" << nl;
   
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}