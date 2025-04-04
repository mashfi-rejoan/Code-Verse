/*  
   In the name of Allah, the Most Gracious, the Most Merciful.  

   Author : Mashfi Rejoan Saikat   
*/


#include<bits/stdc++.h>

#define int long long
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

    int n, p; cin >> n >> p;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }
    sort(all(v));
    int l = 0, r = 2e18;
    int ans = 0;
    while(l <= r)
    {
    	int mid = 1LL * l + (r - l) / 2;
    	int production = 0;
    	for(auto u : v)
    	{
    		production += (mid / u);
    		if(production > p) break;
    	}

    	if(production >= p)
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

    return 0;
}