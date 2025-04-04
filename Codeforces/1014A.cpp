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



void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    int mn = *min_element(all(v));
    int mx = *max_element(all(v));
    int d = mx - mn;
    if(d == 0)
    {
    	cout << gcd(mn, mx) << nl;
    	return;
    }
    int ans = 0;
    for (int i = 1; i * i <= d; i++) 
    {
	    if (d % i == 0) 
	    {
	        int x = i - (mn % i);
	        int new_mn = mn + x;
    		int new_mx = mx + x;
	        ans = max(ans, __gcd(new_mn, new_mx));

	        int ad = d / i;
	        if (i != ad) 
	        {
	        	x = ad - (mn % ad);
	        	new_mn = mn + x;
    			new_mx = mx + x;
    			ans = max(ans, __gcd(new_mn, new_mx));
	        }
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