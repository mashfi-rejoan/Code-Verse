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

const int N = 1e5 + 9;
int n, m;
int L[N], R[N], Q[N];
bool is_ok(int x) {
	int a[n + 2] = {}, prefix[n + 2] = {};
	for(int i = 1; i <= x; i++) {
		a[Q[i]] = 1;
	}
	for(int i = 1; i <= n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}
	for(int i = 1; i <= m; i++) {
		int cnt = prefix[R[i]] - prefix[L[i] - 1];
		int target = ((R[i] - (L[i] - 1)) / 2) + 1;
		if(cnt >= target) return true;
	}
	return false;
}

void solve()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++) {
    	cin >> L[i] >> R[i];
    }
    int q; cin >> q;
    for(int i = 1; i <= q; i++) {
    	cin >> Q[i];
    }

    int l = 1, r = q, ans = -1;
    while(l <= r) {
    	int mid = l + (r - l) / 2;
    	if(is_ok(mid)) {
    		ans = mid;
    		r = mid - 1;
    	} else {
    		l = mid + 1;
    	}
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