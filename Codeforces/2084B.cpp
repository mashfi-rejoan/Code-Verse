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
    int n; cin >> n;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
	int mn = v[0];
	if(v[0] == v[1]) {
		cout << "YES" << nl;
	}
	else if(mn == 1) {
		int g = 0;
		for(int i = 1; i < n; i++) g = __gcd(g, v[i]);
		if(g == 1) cout << "YES" << nl;
		else cout << "NO" << nl; 
	}
	else {
		vector<int> store;
		for(int i = 1; i < n; i++) {
			if(v[i] % mn == 0) {
				store.push_back(v[i]);
			}
		}
		if(store.size() < 2) cout << "NO" << nl;
		else {
			int g = 0;
			for(auto u : store) g = __gcd(g, u);
			if(g == mn) cout << "YES" << nl;
			else cout << "NO" << nl;
		}
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