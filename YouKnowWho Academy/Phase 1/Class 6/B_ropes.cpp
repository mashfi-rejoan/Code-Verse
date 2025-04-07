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
bool f(double x)
{
	int pieces = 0;
	for(auto u : v)
	{
		pieces += (u / x);
	}
	return pieces >= k;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    v.resize(n);
    for(auto &u : v) cin >> u;

    double l = 0, r = 1e9, ans = -1;
    while(r - l > 1e-7)
    {
    	double mid = l + (r - l) / 2;
    	if(f(mid))
    	{
    		l = mid;
    		ans = mid;
    	}
    	else
    	{
    		r = mid;
    	}
    }

    cout << fixed << setprecision(7) << ans << nl;	
    return 0;
}