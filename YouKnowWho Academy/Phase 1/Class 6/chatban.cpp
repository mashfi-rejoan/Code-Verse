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

int x, k;
bool is_ok(int g)
{
	int emote = 0, p, q;
	if(g > x)
	{
		p = x;
		q = 2 * x - 1 - x;

		emote += ((p * (p + 1)) / 2);

		int h = 2 * x - g - 1;
		int qe = ((q * (q + 1)) / 2) - ((h * (h + 1)) / 2);
		emote += qe;
	}
	else
	{
		emote += ((g * (g + 1)) / 2);
	}

	return emote >= k;
}

void solve()
{
    cin >> x >> k;
    int l = 1, r = 2 * x - 1, ans = 2 * x - 1;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	// cout << l << ' ' << r << ' ' << mid << nl;
    	if(is_ok(mid))
    	{
    		ans = mid;
    		
    		r = mid - 1;
    	}
    	else
    	{
    		
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