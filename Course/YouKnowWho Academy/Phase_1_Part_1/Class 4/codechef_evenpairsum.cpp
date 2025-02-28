#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int a, b; cin >> a >> b;
    ll x = 1LL * (a / 2) * (b / 2);
    ll y = 1LL * ((a + 2 - 1) / 2) * ((b + 2 - 1) / 2);
    ll ans = x + y;
    cout << ans << nl;
}

int main()
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