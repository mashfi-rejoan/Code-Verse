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



void solve()
{
    int n, k; cin >> n >> k;
    vector<int> l(n), r(n), remain;
    for(int i = 0; i < n; i++)
    {
    	cin >> l[i];
    }
    for(int i = 0; i < n; i++)
    {
    	cin >> r[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
    	ans += max(l[i], r[i]);
    	remain.push_back(min(l[i], r[i]));
    }
    // cout << ans << nl;
    sort(allr(remain));
    // print(remain);
    // cout << nl;
    for(int i = 0; i <= k - 2; i++)
    {
    	ans += remain[i];
    }
    ans++;
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