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
    int n, l, r; cin >> n >> l >> r;
    vector<int> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    
    vector<int> L, R;
	for(int i = 1; i <= r; i++) {
		L.push_back(arr[i]);
	}
	for(int i = l; i <= n; i++) {
		R.push_back(arr[i]);
	}
	sort(all(L)); sort(all(R));
	// print(L); cout << nl;
	// print(R); cout << nl;
	int L_sum = 0, R_sum = 0;
	int to = r - l + 1;
	for(int i = 0; i < to; i++) {
		L_sum += L[i];
		R_sum += R[i];
	}
	int ans = min(L_sum, R_sum);
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