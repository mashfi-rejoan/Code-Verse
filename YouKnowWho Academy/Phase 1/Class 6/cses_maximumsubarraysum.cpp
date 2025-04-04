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
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    ll ans = LLONG_MIN;
    ll sum = 0;
    int start, end;
    // cout << end << nl;
    for(int i = 0; i < n; i++)
    {
    	sum += v[i];
    	if(sum < 0)
    	{
    		sum = 0;
    		start = i;
    	}

    	if(sum > ans)
    	{
    		ans = sum;
    		end = i;
    	}
    }
    if(sum == 0)
    {
    	int res = *max_element(all(v));
    	cout << res << nl;
    	return 0;
    }
    else
    {
    	for(int i = start; i <= end; i++)
    	{
    		cout << v[i] << ' ';
    	}
    	cout << nl;
    }
    cout << ans << nl;

    // cout << start << ' ' << end << nl;
    return 0;
}