#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()

void print(vector<int> v)
{
	for(auto u : v)
    {
    	cout << u << ' ';
    }
}

void solve()
{
    int n, k; cin >> n >> k;
    vector<int> v(n);
    ll cost = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    if(k == 1)
    {
    	for(int i = 1; i < n; i++)
    	{
    		cost = max(cost, (1LL * v[0] + v[i]));
    	}

    	for(int i = 0; i < n - 1; i++)
    	{
    		cost = max(cost, (1LL * v[n-1] + v[i]));
    	}
    	cout << cost << nl;
    	return;
    }
    sort(all(v), greater<int>());
    // print(v);
    // cout << nl;
    for(int i = 0; i <= k; i++)
    {
    	cost += (1LL * v[i]);
    	
    }
    // v.erase(v.begin(), v.begin() + k);
    // print(v);
    // cost += v[k];
    // cout << v[0] << nl;
    // cost--;
    cout << cost << nl;
    // cout << string(20, '-') << nl;
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