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

int n, k;
vector<int> v;

bool is_ok(int x)
{
	int current_sum = 0, min_split = 1;

	for(int i = 0; i < n; i++)
	{
		if(current_sum + v[i] <= x)
		{
			current_sum += (1LL * v[i]);
		}
		else
		{
			if(v[i] > x) return false;

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

    // sort(all(v));

    int l = 1, r = 1e15, ans = 0;
    while(l <= r)
    {
    	int mid = l + (r - l) / 2;
    	if(is_ok(mid))
    	{
    		ans = mid;
    		// cout << mid << " " << ans << nl;
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