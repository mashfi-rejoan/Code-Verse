/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;

int C = 1;

void solve()
{
	cout << "Case " << C << ":" << nl;
	C++;
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    while(q--)
    {
    	int l, u; cin >> l >> u;
    	auto lb = lower_bound(all(v), l);
    	auto ub = upper_bound(all(v), u);

    	auto ans = ub - lb;
    	cout << ans << nl;
    }
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