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

ll n, k;
vector<int> a, b;

int get_count(ll lim)
{
	// int cnt_of_b = 0;
	// int l = 0, r = n - 1;
	// while(l <= r)
	// {
	//   int mid = l + (r - l) / 2;

	//   if(b[mid] <= lim)
	//   {
	//     cnt_of_b = mid;
	//     l = mid + 1;
	//   }
	//   else
	//   {
	//   	r = mid - 1;
	//   }
	// }
	// return cnt_of_b + 1;

	//using upper bound
	ll cnt_of_b = upper_bound(all(b), lim) - b.begin();
	return cnt_of_b;
}

bool f(int x)
{
	ll cnt = 0;
	for(int i = 0; i < n; i++)
	{
		ll lim = x - a[i];
		cnt += get_count(lim);
	}
	return cnt >= k;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    a.resize(n); b.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
    	cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    ll l = 1, r = 2e9 + 9, ans = -1;
    while(l <= r)
    {
    	ll mid = l + (r - l) / 2;
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