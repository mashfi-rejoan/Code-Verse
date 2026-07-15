#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int l, r, d, u; cin >> l >> r >> d >> u;
    if(l == r and r == d and d == u) cout << "YES\n";
    else cout << "NO\n";
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