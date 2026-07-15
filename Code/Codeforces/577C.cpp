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
bool f(int x)
{
	ll min_operation = 0;
	for(int i = (n / 2); i < n; i++)
	{
		if(v[i] < x)
		{
			min_operation += (x - v[i]);
         if(min_operation > k) return false;
		}
	}
	return min_operation <= k;
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
    sort(all(v));
    ll l = 0, r = 2e9, ans = 0;
    while(l <= r)
    {
    	ll x = l + (r - l) / 2;
    	if(f(x))
    	{
    		ans = x;
    		l = x + 1;
    	}
    	else 
    	{
    		r = x - 1;
    	}
    }
    cout << ans << nl;
    return 0;
}