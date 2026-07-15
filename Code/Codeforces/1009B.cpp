#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()



void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    if(n == 1)
    {
    	cout << v[0] << nl;
    	return;
    }
    sort(all(v), greater<int>());
    //     for(auto u : v)
    // {
    // 	cout << u << ' ';
    // }
    // cout << nl;
    ll ans;
    for(int i = 0; i < n - 1; i++)
    {
    	ans =  v[i] + v[i + 1] - 1;
    	// cout << ans << nl;
    	v[i + 1] = ans;
    	// cout << v[i+1] << nl;
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