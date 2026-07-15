#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

void solve()
{
    int n, x; ll k; cin >> n >> x >> k;
    string s; cin >> s;
    bool flag = false;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
    	// cout << k << nl;
    	if(k > 0) 
    	{

    		k--;
    		if(s[i] == 'L') x--;
    		else if(s[i] == 'R') x++;

    		if(i == (n-1) && x != 0) 
    		{
    			
    			cout << 0 << nl;
    			return;
    		}

    		if(x == 0)
    		{
    			ans = 1;
    			// cout << k << nl;
    			break;
    		}
    	}
    }

    // cout << ans << nl;

    ll p = k, cnt = 0, y = 0;
    for(int i = 0; i < n; i++)
    {
    	// cout << p << nl;
    	if(p > 0) 
    	{
    		p--;
    		cnt++;
    		if(s[i] == 'L') y--;
    		else if(s[i] == 'R') y++;

    		if(i == (n-1) && y != 0) break;

    		if(y == 0)
    		{
    			flag = true;
    			break;
    		}
    	}
    }
//     cout << cnt << nl;
    ll res = 0;
    // cout << res << nl;
    // cout << flag << nl;
    if(flag == true) 
    {
    	// cout << res << nl;
    	res = 1LL * k / cnt;
    	// cout << res << nl;
    	// cout << k << nl;
    	// cout << cnt << nl;
    }
// cout << res << nl;
    ans = ans + res;
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