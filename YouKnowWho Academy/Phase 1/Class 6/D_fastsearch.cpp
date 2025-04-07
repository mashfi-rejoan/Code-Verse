/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define ll long long
#define nl '\n'
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define print(x) for(auto u : x) cout << u << ' '

using namespace std;



int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for(auto &u : v) cin >> u;
    sort(all(v));
    int q; cin >> q;
    while(q--)
    {
    	int l, r; cin >> l >> r;
    	int ans = upper_bound(all(v), r) - lower_bound(all(v), l);
    	cout << ans << nl;
    } 

    return 0;
}