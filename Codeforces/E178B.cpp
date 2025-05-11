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
    int n; cin >> n;
    vector<int> v(n), max;
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    int mx = INT_MIN;
    for(auto u : v)
    {
    	if(mx < u) mx = u;
    	max.push_back(mx);
    }
    reverse(all(max));
    // for(auto u : max) cout << u << ' ';
    // cout << nl;
    reverse(all(v));
    vector<int> a(n + 1), prefix(n + 1);
    for(int i = 0; i < n; i++)
    {
    	a[i + 1] = v[i];
    }

    // print(a);
    // cout << nl;
    for(int i = 1; i <= n; i++)
    {
    	prefix[i] = 1LL * prefix[i - 1] + a[i];
    }
    // print(prefix);
    // cout << nl;
    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
    	int x = 1LL * prefix[i] + max[i];
    	ans.push_back(x);
    }
    print(ans);
    cout << nl;
// 15 28 42 50 63 73 78 
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