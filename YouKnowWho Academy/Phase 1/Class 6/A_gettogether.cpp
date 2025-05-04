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

int n;
vector<int> x, s;

bool f(double t)
{
	double max_l = INT_MIN, min_r = INT_MAX;
	for(int i = 0; i < n; i++)
	{
		double l = x[i] - s[i] * t;
		double r = x[i] + t * s[i];
		max_l = max(max_l, l);
		min_r = min(min_r, r);
	}
	return max_l <= min_r;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    x.resize(n); s.resize(n);
    for(int i = 0; i < n; i++)
    {
    	cin >> x[i] >> s[i];
    }

    double l = 0, r = 1e9, ans = 0;
    int iteration = 100;
    while(iteration--)
    {
    	double mid = l + (r - l) / 2;
    	if(f(mid))
    	{
    		ans = mid;
    		r = mid;
    	}
    	else
    	{
    		l = mid;
    	}
    }

    cout << fixed << setprecision(10) << ans << nl;

    return 0;
}