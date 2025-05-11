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
    int n, k, x; cin >> n >> k >> x;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    int sum = accumulate(all(v), 0LL);
	int segment = ceil((double)x / sum);
	int curr_sum = sum * (segment - 1);
	int bad = 0;
	for(int i = n - 1; i >= 0; i--) {
		curr_sum += v[i];
		bad++;
		if(curr_sum >= x) {
			break;
		}
	}
	int need = ((segment - 1) * n) + bad;
	int ans = (n * k) - need;
	if(ans < 0) cout << 0 << nl;
	else cout << ans + 1 << nl;
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