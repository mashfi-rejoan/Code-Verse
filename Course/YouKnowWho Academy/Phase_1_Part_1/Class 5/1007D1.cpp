#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

ll n, l, r;
vector<ll> v;
map<ll, ll> memo;

ll rec(ll l)
{
	if(memo.count(l))
	{
		return memo[l];
	}
	else if(l <= n) return v[l];
	else
	{
		ll ans = 0;
		for (long long i = 1; i <= (l / 2); i++) 
		{
        	ans ^= rec(i); 
    	}

    	memo[l] = ans;
    	return ans;
	}
}

void solve()
{
	memo.clear();
    cin >> n >> l >> r;
    v.resize(n+1);
    for(int i = 1; i <= n; i++)
    {
    	cin >> v[i];
    }

    cout << rec(l) << nl;
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