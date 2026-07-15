#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n; cin >> n;
    if(n == 0) {
    	cout << 1 << nl;
    	return;
    }
    int ans = 3 * (n / 15);
    int x = n % 15;
    for(int i = 0; i <= x; i++)
    {
    	if(i % 3 == i % 5) ans++;
    }
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