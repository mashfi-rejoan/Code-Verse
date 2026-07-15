/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long int
#define nl '\n'
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



void solve()
{
    int n, m; cin >> n >> m;
    vector<int> v(n), store; for(auto &u : v) cin >> u;
    cin >> m;
    if(n == 1) {
    	cout << "YES" << nl;
    	return;
    }
    v[0] = min(v[0], m - v[0]);
    for(int i = 1; i < n; i++) {
    	int x = m - v[i];
    	if(v[i] < x and v[i] >= v[i - 1]) continue;
    	if(v[i - 1] <= x) {
    		v[i] = x;
    	}
    }
    // print(ans);
    if(is_sorted(all(v))) cout << "YES" << nl;
    else cout << "NO" << nl;
    	
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