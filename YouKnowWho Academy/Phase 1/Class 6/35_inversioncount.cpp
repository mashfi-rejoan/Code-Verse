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

vector<int> v;
int inversion(int l, int r) {
	if(l >= r) return 0;
	int mid = (l + r) / 2;
	int ans = inversion(l, mid);
	ans += inversion(mid + 1, r);

	vector<int> x;
	for(int i = mid + 1; i <= r; i++) {
		x.push_back(v[i]);
	}
	sort(all(x));
	for(int i = l; i <= mid; i++) {
		ans += lower_bound(all(x), v[i]) - x.begin();
	}	
	return ans;
}

void solve()
{
    int n; cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = inversion(0, n - 1);
	cout << cnt << nl;
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