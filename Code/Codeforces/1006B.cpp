#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '-') x++;
        else y++;
    }   
    ll ans = 1LL * (x / 2) * y * ((x+1) / 2);
    // cout << x << ' ' << y << nl;
    cout << ans << nl;
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