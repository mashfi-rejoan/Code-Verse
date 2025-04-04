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

using namespace std;

int n, k;
vector<int> v;
bool f(ll x)
{
	for(int i = 0; i < n; i++)
	{
		if(v[i] > x) return false;
	}
	ll min_split = 1, current_sum = v[0];
	for(int i = 1; i < n; i++)
	{
		
		if(current_sum + v[i] <= x)
		{
			current_sum += v[i];
		}
		else
		{
			min_split++;
			current_sum = v[i];
		}
	}
	return min_split <= k;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    v.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> v[i];
    }

    ll l = 0, r = 2e15, ans = 0;
    while(l <= r)
    {
    	ll mid = 1LL * l + (1LL * r - l) / 2;
    	if(f(mid))
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